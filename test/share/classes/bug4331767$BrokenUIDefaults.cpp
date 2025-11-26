#include <bug4331767$BrokenUIDefaults.h>

#include <bug4331767.h>
#include <java/util/Locale.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $bug4331767 = ::bug4331767;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $UIDefaults = ::javax::swing::UIDefaults;

$FieldInfo _bug4331767$BrokenUIDefaults_FieldInfo_[] = {
	{"defaults", "Ljavax/swing/UIDefaults;", nullptr, 0, $field(bug4331767$BrokenUIDefaults, defaults)},
	{}
};

$MethodInfo _bug4331767$BrokenUIDefaults_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/UIDefaults;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4331767$BrokenUIDefaults::*)($UIDefaults*)>(&bug4331767$BrokenUIDefaults::init$))},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getUIError", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _bug4331767$BrokenUIDefaults_InnerClassesInfo_[] = {
	{"bug4331767$BrokenUIDefaults", "bug4331767", "BrokenUIDefaults", $STATIC},
	{}
};

$ClassInfo _bug4331767$BrokenUIDefaults_ClassInfo_ = {
	$ACC_SUPER,
	"bug4331767$BrokenUIDefaults",
	"javax.swing.UIDefaults",
	nullptr,
	_bug4331767$BrokenUIDefaults_FieldInfo_,
	_bug4331767$BrokenUIDefaults_MethodInfo_,
	nullptr,
	nullptr,
	_bug4331767$BrokenUIDefaults_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4331767"
};

$Object* allocate$bug4331767$BrokenUIDefaults($Class* clazz) {
	return $of($alloc(bug4331767$BrokenUIDefaults));
}

void bug4331767$BrokenUIDefaults::init$($UIDefaults* def) {
	$UIDefaults::init$();
	$set(this, defaults, def);
}

$Object* bug4331767$BrokenUIDefaults::get(Object$* key) {
	if ("ButtonUI"_s->equals(key)) {
		$nc($System::err)->println("[II]  Called BrokenUIDefaults.get(Object)"_s);
		return $of("a nonexistent class"_s);
	}
	return $of($nc(this->defaults)->get(key));
}

$Object* bug4331767$BrokenUIDefaults::get(Object$* key, $Locale* l) {
	if ("ButtonUI"_s->equals(key)) {
		$nc($System::err)->println("[II]  Called BrokenUIDefaults.get(Object, Locale)"_s);
		return $of("a nonexistent class"_s);
	}
	return $of($nc(this->defaults)->get(key, l));
}

void bug4331767$BrokenUIDefaults::getUIError($String* msg) {
	$nc($System::err)->println("[II]  BrokenUIDefaults.getUIError() called, test passes"_s);
	$init($bug4331767);
	$bug4331767::passed = true;
}

bug4331767$BrokenUIDefaults::bug4331767$BrokenUIDefaults() {
}

$Class* bug4331767$BrokenUIDefaults::load$($String* name, bool initialize) {
	$loadClass(bug4331767$BrokenUIDefaults, name, initialize, &_bug4331767$BrokenUIDefaults_ClassInfo_, allocate$bug4331767$BrokenUIDefaults);
	return class$;
}

$Class* bug4331767$BrokenUIDefaults::class$ = nullptr;