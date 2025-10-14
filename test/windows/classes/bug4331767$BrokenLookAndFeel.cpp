#include <bug4331767$BrokenLookAndFeel.h>

#include <bug4331767$BrokenUIDefaults.h>
#include <bug4331767.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $bug4331767 = ::bug4331767;
using $bug4331767$BrokenUIDefaults = ::bug4331767$BrokenUIDefaults;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$FieldInfo _bug4331767$BrokenLookAndFeel_FieldInfo_[] = {
	{"defaults", "Ljavax/swing/UIDefaults;", nullptr, 0, $field(bug4331767$BrokenLookAndFeel, defaults)},
	{}
};

$MethodInfo _bug4331767$BrokenLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4331767$BrokenLookAndFeel::*)()>(&bug4331767$BrokenLookAndFeel::init$))},
	{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4331767$BrokenLookAndFeel_InnerClassesInfo_[] = {
	{"bug4331767$BrokenLookAndFeel", "bug4331767", "BrokenLookAndFeel", $STATIC},
	{}
};

$ClassInfo _bug4331767$BrokenLookAndFeel_ClassInfo_ = {
	$ACC_SUPER,
	"bug4331767$BrokenLookAndFeel",
	"javax.swing.plaf.metal.MetalLookAndFeel",
	nullptr,
	_bug4331767$BrokenLookAndFeel_FieldInfo_,
	_bug4331767$BrokenLookAndFeel_MethodInfo_,
	nullptr,
	nullptr,
	_bug4331767$BrokenLookAndFeel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4331767"
};

$Object* allocate$bug4331767$BrokenLookAndFeel($Class* clazz) {
	return $of($alloc(bug4331767$BrokenLookAndFeel));
}

void bug4331767$BrokenLookAndFeel::init$() {
	$MetalLookAndFeel::init$();
	$set(this, defaults, $new($bug4331767$BrokenUIDefaults, $($MetalLookAndFeel::getDefaults())));
}

$UIDefaults* bug4331767$BrokenLookAndFeel::getDefaults() {
	return this->defaults;
}

bug4331767$BrokenLookAndFeel::bug4331767$BrokenLookAndFeel() {
}

$Class* bug4331767$BrokenLookAndFeel::load$($String* name, bool initialize) {
	$loadClass(bug4331767$BrokenLookAndFeel, name, initialize, &_bug4331767$BrokenLookAndFeel_ClassInfo_, allocate$bug4331767$BrokenLookAndFeel);
	return class$;
}

$Class* bug4331767$BrokenLookAndFeel::class$ = nullptr;