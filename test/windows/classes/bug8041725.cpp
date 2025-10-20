#include <bug8041725.h>

#include <bug8041725$1.h>
#include <java/awt/Color.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JList.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $bug8041725$1 = ::bug8041725$1;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JList = ::javax::swing::JList;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$MethodInfo _bug8041725_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8041725::*)()>(&bug8041725::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8041725::main)), "java.lang.Exception"},
	{"testSelectionColors", "(Ljavax/swing/JList;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JList*)>(&bug8041725::testSelectionColors))},
	{}
};

$InnerClassInfo _bug8041725_InnerClassesInfo_[] = {
	{"bug8041725$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8041725_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8041725",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug8041725_MethodInfo_,
	nullptr,
	nullptr,
	_bug8041725_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8041725$1"
};

$Object* allocate$bug8041725($Class* clazz) {
	return $of($alloc(bug8041725));
}

void bug8041725::init$() {
}

void bug8041725::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($NimbusLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new($bug8041725$1));
}

void bug8041725::testSelectionColors($JList* list) {
	$useLocalCurrentObjectStackCache();
	$var($Color, selBackColor, $nc(list)->getSelectionBackground());
	if (!($instanceOf($UIResource, selBackColor))) {
		$throwNew($RuntimeException, $($String::format("JList.getSelectionBackground() returned instance of \'%s\' instead of UIResource."_s, $$new($ObjectArray, {$of($nc($of(selBackColor))->getClass())}))));
	}
	$var($Color, selForeColor, list->getSelectionForeground());
	if (!($instanceOf($UIResource, selForeColor))) {
		$throwNew($RuntimeException, $($String::format("JList.getSelectionForeground() returned instance of \'%s\' instead of UIResource."_s, $$new($ObjectArray, {$of($nc($of(selForeColor))->getClass())}))));
	}
}

bug8041725::bug8041725() {
}

$Class* bug8041725::load$($String* name, bool initialize) {
	$loadClass(bug8041725, name, initialize, &_bug8041725_ClassInfo_, allocate$bug8041725);
	return class$;
}

$Class* bug8041725::class$ = nullptr;