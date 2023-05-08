#pragma once

namespace fast_io::details::streamreflect
{

template<typename T>
concept has_input_stream_seek = requires(T&& instm)
{
	::fast_io::details::input_stream_seek_impl(::fast_io::manipulators::input_stream_ref(instm),0,::fast_io::seekdir::cur);
};

template<typename T>
concept has_input_stream_lock = requires(T&& instm)
{
	::fast_io::details::input_stream_lock_impl(::fast_io::manipulators::input_stream_ref(instm));
};

template<typename T>
concept has_ibuffer_basic_ops = requires(T &&instm,typename decltype(::fast_io::manipulators::input_stream_ref(instm))::input_char_type *ptr)
{
	ibuffer_begin(::fast_io::manipulators::input_stream_ref(instm));
	ibuffer_curr(::fast_io::manipulators::input_stream_ref(instm));
	ibuffer_end(::fast_io::manipulators::input_stream_ref(instm));
	ibuffer_set_curr(::fast_io::manipulators::input_stream_ref(instm),ptr);
};

template<typename T>
concept has_ibuffer_all_ops = has_ibuffer_basic_ops<T>&&(requires(T &&instm,typename decltype(::fast_io::manipulators::input_stream_ref(instm))::input_char_type *cptr)
{
	ibuffer_read_all_underflow_define(::fast_io::manipulators::input_stream_ref(instm),cptr,cptr);
});

template<typename T>
concept has_ibuffer_some_ops = has_ibuffer_basic_ops<T>&&(requires(T &&instm,typename decltype(::fast_io::manipulators::input_stream_ref(instm))::input_char_type *cptr)
{
	ibuffer_read_some_underflow_define(::fast_io::manipulators::input_stream_ref(instm),cptr,cptr);
});

template<typename T>
concept has_ibuffer_ops = has_ibuffer_all_ops<T>||has_ibuffer_some_ops<T>;

template<typename T>
concept has_read_some_define = requires(T &&instm,typename decltype(::fast_io::manipulators::input_stream_ref(instm))::input_char_type* ptr)
{
	read_some_define(::fast_io::manipulators::input_stream_ref(instm),ptr,ptr);
};

template<typename T>
concept has_read_all_define = requires(T &&instm,typename decltype(::fast_io::manipulators::input_stream_ref(instm))::input_char_type* ptr)
{
	read_all_define(::fast_io::manipulators::input_stream_ref(instm),ptr,ptr);
};

template<typename T>
concept has_read_some_bytes_define = requires(T &&instm,::std::byte* ptr)
{
	read_some_bytes_define(::fast_io::manipulators::input_stream_ref(instm),ptr,ptr);
};

template<typename T>
concept has_read_all_bytes_define = requires(T &&instm,::std::byte* ptr)
{
	read_all_bytes_define(::fast_io::manipulators::input_stream_ref(instm),ptr,ptr);
};

template<typename T>
concept has_scatter_read_some_bytes_define = requires(T &&instm,::fast_io::io_scatter_t *scatter,::std::size_t len)
{
	scatter_read_some_bytes_define(::fast_io::manipulators::input_stream_ref(instm),scatter,len);
};

template<typename T>
concept has_scatter_read_all_bytes_define = requires(T &&instm,::fast_io::io_scatter_t *scatter,::std::size_t len)
{
	scatter_read_all_bytes_define(::fast_io::manipulators::input_stream_ref(instm),scatter,len);
};

template<typename T>
concept has_scatter_read_some_define = requires(T &&instm,::fast_io::basic_io_scatter_t<typename decltype(::fast_io::manipulators::input_stream_ref(instm))::input_char_type> *pscatter,::std::size_t len)
{
	scatter_read_some_define(::fast_io::manipulators::input_stream_ref(instm),pscatter,len);
};

template<typename T>
concept has_scatter_read_all_define = requires(T &&instm,::fast_io::basic_io_scatter_t<typename decltype(::fast_io::manipulators::input_stream_ref(instm))::input_char_type> *pscatter,::std::size_t len)
{
	scatter_read_all_define(::fast_io::manipulators::input_stream_ref(instm),pscatter,len);
};

template<typename T>
concept inputstreamdef = requires(T&& instm)
{
	{::fast_io::manipulators::input_stream_ref(instm)} noexcept;
};

}
