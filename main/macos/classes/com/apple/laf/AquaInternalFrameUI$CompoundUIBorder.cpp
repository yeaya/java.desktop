#include <com/apple/laf/AquaInternalFrameUI$CompoundUIBorder.h>

#include <com/apple/laf/AquaInternalFrameUI.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaInternalFrameUI$CompoundUIBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/border/Border;Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaInternalFrameUI$CompoundUIBorder::*)($Border*,$Border*)>(&AquaInternalFrameUI$CompoundUIBorder::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaInternalFrameUI$CompoundUIBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$CompoundUIBorder", "com.apple.laf.AquaInternalFrameUI", "CompoundUIBorder", $STATIC},
	{}
};

$ClassInfo _AquaInternalFrameUI$CompoundUIBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$CompoundUIBorder",
	"javax.swing.border.CompoundBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_AquaInternalFrameUI$CompoundUIBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFrameUI$CompoundUIBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$CompoundUIBorder($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$CompoundUIBorder));
}

int32_t AquaInternalFrameUI$CompoundUIBorder::hashCode() {
	 return this->$CompoundBorder::hashCode();
}

bool AquaInternalFrameUI$CompoundUIBorder::equals(Object$* arg0) {
	 return this->$CompoundBorder::equals(arg0);
}

$Object* AquaInternalFrameUI$CompoundUIBorder::clone() {
	 return this->$CompoundBorder::clone();
}

$String* AquaInternalFrameUI$CompoundUIBorder::toString() {
	 return this->$CompoundBorder::toString();
}

void AquaInternalFrameUI$CompoundUIBorder::finalize() {
	this->$CompoundBorder::finalize();
}

void AquaInternalFrameUI$CompoundUIBorder::init$($Border* inside, $Border* outside) {
	$CompoundBorder::init$(inside, outside);
}

AquaInternalFrameUI$CompoundUIBorder::AquaInternalFrameUI$CompoundUIBorder() {
}

$Class* AquaInternalFrameUI$CompoundUIBorder::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$CompoundUIBorder, name, initialize, &_AquaInternalFrameUI$CompoundUIBorder_ClassInfo_, allocate$AquaInternalFrameUI$CompoundUIBorder);
	return class$;
}

$Class* AquaInternalFrameUI$CompoundUIBorder::class$ = nullptr;

		} // laf
	} // apple
} // com