#include <sun/java2d/cmm/ProfileDataVerifier.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef HEADER_SIZE
#undef MAX_TAG_COUNT
#undef MAX_VALUE
#undef PROFILE_FILE_SIGNATURE
#undef TOC_OFFSET
#undef TOC_RECORD_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace cmm {

$FieldInfo _ProfileDataVerifier_FieldInfo_[] = {
	{"MAX_TAG_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProfileDataVerifier, MAX_TAG_COUNT)},
	{"HEADER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProfileDataVerifier, HEADER_SIZE)},
	{"TOC_OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProfileDataVerifier, TOC_OFFSET)},
	{"TOC_RECORD_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProfileDataVerifier, TOC_RECORD_SIZE)},
	{"PROFILE_FILE_SIGNATURE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProfileDataVerifier, PROFILE_FILE_SIGNATURE)},
	{}
};

$MethodInfo _ProfileDataVerifier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProfileDataVerifier::*)()>(&ProfileDataVerifier::init$))},
	{"getTagOffset", "(I[B)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$bytes*)>(&ProfileDataVerifier::getTagOffset))},
	{"getTagSize", "(I[B)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$bytes*)>(&ProfileDataVerifier::getTagSize))},
	{"readInt32", "([BI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t)>(&ProfileDataVerifier::readInt32))},
	{"verify", "([B)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*)>(&ProfileDataVerifier::verify))},
	{}
};

$ClassInfo _ProfileDataVerifier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.cmm.ProfileDataVerifier",
	"java.lang.Object",
	nullptr,
	_ProfileDataVerifier_FieldInfo_,
	_ProfileDataVerifier_MethodInfo_
};

$Object* allocate$ProfileDataVerifier($Class* clazz) {
	return $of($alloc(ProfileDataVerifier));
}

void ProfileDataVerifier::init$() {
}

void ProfileDataVerifier::verify($bytes* data) {
	if (data == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid ICC Profile Data"_s);
	}
	if ($nc(data)->length < ProfileDataVerifier::TOC_OFFSET) {
		$throwNew($IllegalArgumentException, "Invalid ICC Profile Data"_s);
	}
	int32_t size = readInt32(data, 0);
	int32_t tagCount = readInt32(data, ProfileDataVerifier::HEADER_SIZE);
	if (tagCount < 0 || tagCount > ProfileDataVerifier::MAX_TAG_COUNT) {
		$throwNew($IllegalArgumentException, "Invalid ICC Profile Data"_s);
	}
	if (size < (ProfileDataVerifier::TOC_OFFSET + (tagCount * ProfileDataVerifier::TOC_RECORD_SIZE)) || size > $nc(data)->length) {
		$throwNew($IllegalArgumentException, "Invalid ICC Profile Data"_s);
	}
	int32_t sig = readInt32(data, 36);
	if (ProfileDataVerifier::PROFILE_FILE_SIGNATURE != sig) {
		$throwNew($IllegalArgumentException, "Invalid ICC Profile Data"_s);
	}
	for (int32_t i = 0; i < tagCount; ++i) {
		int32_t tag_offset = getTagOffset(i, data);
		int32_t tag_size = getTagSize(i, data);
		if (tag_offset < ProfileDataVerifier::TOC_OFFSET || tag_offset > size) {
			$throwNew($IllegalArgumentException, "Invalid ICC Profile Data"_s);
		}
		if (tag_size < 0 || tag_size > ($Integer::MAX_VALUE - tag_offset) || tag_size + tag_offset > size) {
			$throwNew($IllegalArgumentException, "Invalid ICC Profile Data"_s);
		}
	}
}

int32_t ProfileDataVerifier::getTagOffset(int32_t idx, $bytes* data) {
	int32_t pos = ProfileDataVerifier::TOC_OFFSET + idx * ProfileDataVerifier::TOC_RECORD_SIZE + 4;
	return readInt32(data, pos);
}

int32_t ProfileDataVerifier::getTagSize(int32_t idx, $bytes* data) {
	int32_t pos = ProfileDataVerifier::TOC_OFFSET + idx * ProfileDataVerifier::TOC_RECORD_SIZE + 8;
	return readInt32(data, pos);
}

int32_t ProfileDataVerifier::readInt32($bytes* data, int32_t off) {
	int32_t res = 0;
	for (int32_t i = 0; i < 4; ++i) {
		res = res << 8;
		res |= ((int32_t)(255 & (uint32_t)(int32_t)$nc(data)->get(off++)));
	}
	return res;
}

ProfileDataVerifier::ProfileDataVerifier() {
}

$Class* ProfileDataVerifier::load$($String* name, bool initialize) {
	$loadClass(ProfileDataVerifier, name, initialize, &_ProfileDataVerifier_ClassInfo_, allocate$ProfileDataVerifier);
	return class$;
}

$Class* ProfileDataVerifier::class$ = nullptr;

		} // cmm
	} // java2d
} // sun