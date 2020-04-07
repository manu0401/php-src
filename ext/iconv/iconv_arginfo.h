/* This is a generated file, edit the .stub.php file instead. */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_strlen, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, charset, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_substr, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(0, charset, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_strpos, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, haystack, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, needle, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charset, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_strrpos, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, haystack, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, needle, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, charset, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_mime_encode, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, field_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, field_value, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, preference, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_mime_decode, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, encoded_string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charset, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_mime_decode_headers, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, headers, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charset, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv, 0, 3, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, in_charset, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, out_charset, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_iconv_set_encoding, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, charset, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_get_encoding, 0, 0, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()


ZEND_FUNCTION(iconv_strlen);
ZEND_FUNCTION(iconv_substr);
ZEND_FUNCTION(iconv_strpos);
ZEND_FUNCTION(iconv_strrpos);
ZEND_FUNCTION(iconv_mime_encode);
ZEND_FUNCTION(iconv_mime_decode);
ZEND_FUNCTION(iconv_mime_decode_headers);
ZEND_FUNCTION(iconv);
ZEND_FUNCTION(iconv_set_encoding);
ZEND_FUNCTION(iconv_get_encoding);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(iconv_strlen, arginfo_iconv_strlen)
	ZEND_FE(iconv_substr, arginfo_iconv_substr)
	ZEND_FE(iconv_strpos, arginfo_iconv_strpos)
	ZEND_FE(iconv_strrpos, arginfo_iconv_strrpos)
	ZEND_FE(iconv_mime_encode, arginfo_iconv_mime_encode)
	ZEND_FE(iconv_mime_decode, arginfo_iconv_mime_decode)
	ZEND_FE(iconv_mime_decode_headers, arginfo_iconv_mime_decode_headers)
	ZEND_FE(iconv, arginfo_iconv)
	ZEND_FE(iconv_set_encoding, arginfo_iconv_set_encoding)
	ZEND_FE(iconv_get_encoding, arginfo_iconv_get_encoding)
	ZEND_FE_END
};