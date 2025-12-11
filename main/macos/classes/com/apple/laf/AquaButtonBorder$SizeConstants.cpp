#include <com/apple/laf/AquaButtonBorder$SizeConstants.h>

#include <com/apple/laf/AquaButtonBorder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaButtonBorder$SizeConstants_FieldInfo_[] = {
	{"fNormalButtonHeight", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaButtonBorder$SizeConstants, fNormalButtonHeight)},
	{"fNormalMinButtonWidth", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaButtonBorder$SizeConstants, fNormalMinButtonWidth)},
	{"fSquareButtonHeightThreshold", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaButtonBorder$SizeConstants, fSquareButtonHeightThreshold)},
	{"fSquareButtonWidthThreshold", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaButtonBorder$SizeConstants, fSquareButtonWidthThreshold)},
	{}
};

$MethodInfo _AquaButtonBorder$SizeConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaButtonBorder$SizeConstants::*)()>(&AquaButtonBorder$SizeConstants::init$))},
	{}
};

$InnerClassInfo _AquaButtonBorder$SizeConstants_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonBorder$SizeConstants", "com.apple.laf.AquaButtonBorder", "SizeConstants", $STATIC},
	{}
};

$ClassInfo _AquaButtonBorder$SizeConstants_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonBorder$SizeConstants",
	"java.lang.Object",
	nullptr,
	_AquaButtonBorder$SizeConstants_FieldInfo_,
	_AquaButtonBorder$SizeConstants_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonBorder$SizeConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonBorder"
};

$Object* allocate$AquaButtonBorder$SizeConstants($Class* clazz) {
	return $of($alloc(AquaButtonBorder$SizeConstants));
}

void AquaButtonBorder$SizeConstants::init$() {
}

AquaButtonBorder$SizeConstants::AquaButtonBorder$SizeConstants() {
}

$Class* AquaButtonBorder$SizeConstants::load$($String* name, bool initialize) {
	$loadClass(AquaButtonBorder$SizeConstants, name, initialize, &_AquaButtonBorder$SizeConstants_ClassInfo_, allocate$AquaButtonBorder$SizeConstants);
	return class$;
}

$Class* AquaButtonBorder$SizeConstants::class$ = nullptr;

		} // laf
	} // apple
} // com