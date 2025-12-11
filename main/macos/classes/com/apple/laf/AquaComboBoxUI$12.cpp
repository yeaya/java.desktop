#include <com/apple/laf/AquaComboBoxUI$12.h>

#include <com/apple/laf/AquaComboBoxUI$12$1.h>
#include <com/apple/laf/AquaComboBoxUI$12$2.h>
#include <com/apple/laf/AquaComboBoxUI$12$3.h>
#include <com/apple/laf/AquaComboBoxUI$12$4.h>
#include <com/apple/laf/AquaComboBoxUI$12$5.h>
#include <com/apple/laf/AquaComboBoxUI$12$6.h>
#include <com/apple/laf/AquaComboBoxUI$12$7.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <jcpp.h>

#undef FRAME_ACTIVE_PROPERTY

using $ClientPropertyApplicator$PropertyArray = $Array<::com::apple::laf::ClientPropertyApplicator$Property>;
using $AquaComboBoxUI$12$1 = ::com::apple::laf::AquaComboBoxUI$12$1;
using $AquaComboBoxUI$12$2 = ::com::apple::laf::AquaComboBoxUI$12$2;
using $AquaComboBoxUI$12$3 = ::com::apple::laf::AquaComboBoxUI$12$3;
using $AquaComboBoxUI$12$4 = ::com::apple::laf::AquaComboBoxUI$12$4;
using $AquaComboBoxUI$12$5 = ::com::apple::laf::AquaComboBoxUI$12$5;
using $AquaComboBoxUI$12$6 = ::com::apple::laf::AquaComboBoxUI$12$6;
using $AquaComboBoxUI$12$7 = ::com::apple::laf::AquaComboBoxUI$12$7;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaComboBoxUI$12_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$12::*)()>(&AquaComboBoxUI$12::init$))},
	{"getInstance", "()Lcom/apple/laf/ClientPropertyApplicator;", "()Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/JComboBox<*>;Lcom/apple/laf/AquaComboBoxUI;>;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$12_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaComboBoxUI$12_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$12", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaComboBoxUI$12$7", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$12$6", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$12$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$12$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$12$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$12$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$12$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxUI$12_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$12",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaComboBoxUI$12_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/JComboBox<*>;Lcom/apple/laf/AquaComboBoxUI;>;>;",
	&_AquaComboBoxUI$12_EnclosingMethodInfo_,
	_AquaComboBoxUI$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$12($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$12));
}

void AquaComboBoxUI$12::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaComboBoxUI$12::getInstance() {
	$useLocalCurrentObjectStackCache();
	$init($AquaFocusHandler);
	return $of($new($AquaComboBoxUI$12$7, this, $$new($ClientPropertyApplicator$PropertyArray, {
		static_cast<$ClientPropertyApplicator$Property*>($$new($AquaComboBoxUI$12$1, this, $AquaFocusHandler::FRAME_ACTIVE_PROPERTY)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($AquaComboBoxUI$12$2, this, "editable"_s)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($AquaComboBoxUI$12$3, this, "background"_s)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($AquaComboBoxUI$12$4, this, "foreground"_s)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($AquaComboBoxUI$12$5, this, "JComboBox.isPopDown"_s)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($AquaComboBoxUI$12$6, this, "JComboBox.isSquare"_s))
	})));
}

AquaComboBoxUI$12::AquaComboBoxUI$12() {
}

$Class* AquaComboBoxUI$12::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$12, name, initialize, &_AquaComboBoxUI$12_ClassInfo_, allocate$AquaComboBoxUI$12);
	return class$;
}

$Class* AquaComboBoxUI$12::class$ = nullptr;

		} // laf
	} // apple
} // com