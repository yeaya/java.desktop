#include <sun/font/CompositeFontDescriptor.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _CompositeFontDescriptor_FieldInfo_[] = {
	{"faceName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CompositeFontDescriptor, faceName)},
	{"coreComponentCount", "I", nullptr, $PRIVATE, $field(CompositeFontDescriptor, coreComponentCount)},
	{"componentFaceNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(CompositeFontDescriptor, componentFaceNames)},
	{"componentFileNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(CompositeFontDescriptor, componentFileNames)},
	{"exclusionRanges", "[I", nullptr, $PRIVATE, $field(CompositeFontDescriptor, exclusionRanges)},
	{"exclusionRangeLimits", "[I", nullptr, $PRIVATE, $field(CompositeFontDescriptor, exclusionRangeLimits)},
	{}
};

$MethodInfo _CompositeFontDescriptor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/String;[I[I)V", nullptr, $PUBLIC, $method(static_cast<void(CompositeFontDescriptor::*)($String*,int32_t,$StringArray*,$StringArray*,$ints*,$ints*)>(&CompositeFontDescriptor::init$))},
	{"getComponentFaceNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getComponentFileNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCoreComponentCount", "()I", nullptr, $PUBLIC},
	{"getExclusionRangeLimits", "()[I", nullptr, $PUBLIC},
	{"getExclusionRanges", "()[I", nullptr, $PUBLIC},
	{"getFaceName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompositeFontDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.CompositeFontDescriptor",
	"java.lang.Object",
	nullptr,
	_CompositeFontDescriptor_FieldInfo_,
	_CompositeFontDescriptor_MethodInfo_
};

$Object* allocate$CompositeFontDescriptor($Class* clazz) {
	return $of($alloc(CompositeFontDescriptor));
}

void CompositeFontDescriptor::init$($String* faceName, int32_t coreComponentCount, $StringArray* componentFaceNames, $StringArray* componentFileNames, $ints* exclusionRanges, $ints* exclusionRangeLimits) {
	$set(this, faceName, faceName);
	this->coreComponentCount = coreComponentCount;
	$set(this, componentFaceNames, componentFaceNames);
	$set(this, componentFileNames, componentFileNames);
	$set(this, exclusionRanges, exclusionRanges);
	$set(this, exclusionRangeLimits, exclusionRangeLimits);
}

$String* CompositeFontDescriptor::getFaceName() {
	return this->faceName;
}

int32_t CompositeFontDescriptor::getCoreComponentCount() {
	return this->coreComponentCount;
}

$StringArray* CompositeFontDescriptor::getComponentFaceNames() {
	return this->componentFaceNames;
}

$StringArray* CompositeFontDescriptor::getComponentFileNames() {
	return this->componentFileNames;
}

$ints* CompositeFontDescriptor::getExclusionRanges() {
	return this->exclusionRanges;
}

$ints* CompositeFontDescriptor::getExclusionRangeLimits() {
	return this->exclusionRangeLimits;
}

CompositeFontDescriptor::CompositeFontDescriptor() {
}

$Class* CompositeFontDescriptor::load$($String* name, bool initialize) {
	$loadClass(CompositeFontDescriptor, name, initialize, &_CompositeFontDescriptor_ClassInfo_, allocate$CompositeFontDescriptor);
	return class$;
}

$Class* CompositeFontDescriptor::class$ = nullptr;

	} // font
} // sun