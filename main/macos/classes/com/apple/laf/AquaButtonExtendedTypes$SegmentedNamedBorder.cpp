#include <com/apple/laf/AquaButtonExtendedTypes$SegmentedNamedBorder.h>

#include <apple/laf/JRSUIConstants$Widget.h>
#include <com/apple/laf/AquaButtonBorder$Named.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <jcpp.h>

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaButtonBorder$Named = ::com::apple::laf::AquaButtonBorder$Named;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonExtendedTypes$SegmentedNamedBorder_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaButtonExtendedTypes$SegmentedNamedBorder;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonExtendedTypes$SegmentedNamedBorder::*)(AquaButtonExtendedTypes$SegmentedNamedBorder*)>(&AquaButtonExtendedTypes$SegmentedNamedBorder::init$))},
	{"<init>", "(Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonExtendedTypes$SegmentedNamedBorder::*)($JRSUIConstants$Widget*,$AquaUtilControlSize$SizeDescriptor*)>(&AquaButtonExtendedTypes$SegmentedNamedBorder::init$))},
	{"isSelectionPressing", "()Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaButtonExtendedTypes$SegmentedNamedBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonExtendedTypes$SegmentedNamedBorder", "com.apple.laf.AquaButtonExtendedTypes", "SegmentedNamedBorder", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonBorder$Named", "com.apple.laf.AquaButtonBorder", "Named", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaButtonExtendedTypes$SegmentedNamedBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonExtendedTypes$SegmentedNamedBorder",
	"com.apple.laf.AquaButtonBorder$Named",
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$SegmentedNamedBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$SegmentedNamedBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonExtendedTypes"
};

$Object* allocate$AquaButtonExtendedTypes$SegmentedNamedBorder($Class* clazz) {
	return $of($alloc(AquaButtonExtendedTypes$SegmentedNamedBorder));
}

void AquaButtonExtendedTypes$SegmentedNamedBorder::init$(AquaButtonExtendedTypes$SegmentedNamedBorder* sizeDescriptor) {
	$AquaButtonBorder$Named::init$(sizeDescriptor);
}

void AquaButtonExtendedTypes$SegmentedNamedBorder::init$($JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeDescriptor* sizeDescriptor) {
	$AquaButtonBorder$Named::init$(widget, sizeDescriptor);
}

bool AquaButtonExtendedTypes$SegmentedNamedBorder::isSelectionPressing() {
	return false;
}

AquaButtonExtendedTypes$SegmentedNamedBorder::AquaButtonExtendedTypes$SegmentedNamedBorder() {
}

$Class* AquaButtonExtendedTypes$SegmentedNamedBorder::load$($String* name, bool initialize) {
	$loadClass(AquaButtonExtendedTypes$SegmentedNamedBorder, name, initialize, &_AquaButtonExtendedTypes$SegmentedNamedBorder_ClassInfo_, allocate$AquaButtonExtendedTypes$SegmentedNamedBorder);
	return class$;
}

$Class* AquaButtonExtendedTypes$SegmentedNamedBorder::class$ = nullptr;

		} // laf
	} // apple
} // com