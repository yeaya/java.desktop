#include <bug7010561.h>

#include <bug7010561$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef BOTTOM
#undef IS_SELECTED
#undef RETURN_VALUE
#undef TAB_PLACEMENT
#undef TOP

using $bug7010561$1 = ::bug7010561$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$FieldInfo _bug7010561_FieldInfo_[] = {
	{"TAB_PLACEMENT", "[I", nullptr, $PRIVATE | $STATIC, $staticField(bug7010561, TAB_PLACEMENT)},
	{"IS_SELECTED", "[Z", nullptr, $PRIVATE | $STATIC, $staticField(bug7010561, IS_SELECTED)},
	{"RETURN_VALUE", "[I", nullptr, $PRIVATE | $STATIC, $staticField(bug7010561, RETURN_VALUE)},
	{}
};

$MethodInfo _bug7010561_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7010561::*)()>(&bug7010561::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7010561::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7010561_InnerClassesInfo_[] = {
	{"bug7010561$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7010561_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7010561",
	"java.lang.Object",
	nullptr,
	_bug7010561_FieldInfo_,
	_bug7010561_MethodInfo_,
	nullptr,
	nullptr,
	_bug7010561_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7010561$1"
};

$Object* allocate$bug7010561($Class* clazz) {
	return $of($alloc(bug7010561));
}

$ints* bug7010561::TAB_PLACEMENT = nullptr;
$booleans* bug7010561::IS_SELECTED = nullptr;
$ints* bug7010561::RETURN_VALUE = nullptr;

void bug7010561::init$() {
}

void bug7010561::main($StringArray* args) {
	$init(bug7010561);
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($SynthLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new($bug7010561$1));
}

void clinit$bug7010561($Class* class$) {
	$assignStatic(bug7010561::TAB_PLACEMENT, $new($ints, {
		$SwingConstants::BOTTOM,
		$SwingConstants::BOTTOM,
		$SwingConstants::TOP,
		$SwingConstants::TOP
	}));
	$assignStatic(bug7010561::IS_SELECTED, $new($booleans, {
		false,
		true,
		false,
		true
	}));
	$assignStatic(bug7010561::RETURN_VALUE, $new($ints, {
		-1,
		1,
		1,
		-1
	}));
}

bug7010561::bug7010561() {
}

$Class* bug7010561::load$($String* name, bool initialize) {
	$loadClass(bug7010561, name, initialize, &_bug7010561_ClassInfo_, clinit$bug7010561, allocate$bug7010561);
	return class$;
}

$Class* bug7010561::class$ = nullptr;