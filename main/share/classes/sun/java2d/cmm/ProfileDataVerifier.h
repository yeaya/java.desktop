#ifndef _sun_java2d_cmm_ProfileDataVerifier_h_
#define _sun_java2d_cmm_ProfileDataVerifier_h_
//$ class sun.java2d.cmm.ProfileDataVerifier
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HEADER_SIZE")
#undef HEADER_SIZE
#pragma push_macro("MAX_TAG_COUNT")
#undef MAX_TAG_COUNT
#pragma push_macro("PROFILE_FILE_SIGNATURE")
#undef PROFILE_FILE_SIGNATURE
#pragma push_macro("TOC_OFFSET")
#undef TOC_OFFSET
#pragma push_macro("TOC_RECORD_SIZE")
#undef TOC_RECORD_SIZE

namespace sun {
	namespace java2d {
		namespace cmm {

class ProfileDataVerifier : public ::java::lang::Object {
	$class(ProfileDataVerifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProfileDataVerifier();
	void init$();
	static int32_t getTagOffset(int32_t idx, $bytes* data);
	static int32_t getTagSize(int32_t idx, $bytes* data);
	static int32_t readInt32($bytes* data, int32_t off);
	static void verify($bytes* data);
	static const int32_t MAX_TAG_COUNT = 100;
	static const int32_t HEADER_SIZE = 128;
	static const int32_t TOC_OFFSET = 132; // HEADER_SIZE + 4
	static const int32_t TOC_RECORD_SIZE = 12;
	static const int32_t PROFILE_FILE_SIGNATURE = 0x61637370;
};

		} // cmm
	} // java2d
} // sun

#pragma pop_macro("HEADER_SIZE")
#pragma pop_macro("MAX_TAG_COUNT")
#pragma pop_macro("PROFILE_FILE_SIGNATURE")
#pragma pop_macro("TOC_OFFSET")
#pragma pop_macro("TOC_RECORD_SIZE")

#endif // _sun_java2d_cmm_ProfileDataVerifier_h_