#include <bug6739756$1.h>

#include <bug6739756.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <jcpp.h>

using $bug6739756 = ::bug6739756;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JToolBar = ::javax::swing::JToolBar;

$MethodInfo _bug6739756$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6739756$1::*)()>(&bug6739756$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6739756$1_EnclosingMethodInfo_ = {
	"bug6739756",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6739756$1_InnerClassesInfo_[] = {
	{"bug6739756$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6739756$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6739756$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6739756$1_MethodInfo_,
	nullptr,
	&_bug6739756$1_EnclosingMethodInfo_,
	_bug6739756$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6739756"
};

$Object* allocate$bug6739756$1($Class* clazz) {
	return $of($alloc(bug6739756$1));
}

void bug6739756$1::init$() {
}

void bug6739756$1::run() {
	$var($JToolBar, tb, $new($JToolBar));
	$var($Dimension, preferredSize, tb->getPreferredSize());
	$var($JButton, button, $new($JButton, "Test"_s));
	button->setVisible(false);
	tb->add(static_cast<$Component*>(button));
	if (!$nc(preferredSize)->equals($(tb->getPreferredSize()))) {
		$throwNew($RuntimeException, "Toolbar\'s preferredSize is wrong"_s);
	}
}

bug6739756$1::bug6739756$1() {
}

$Class* bug6739756$1::load$($String* name, bool initialize) {
	$loadClass(bug6739756$1, name, initialize, &_bug6739756$1_ClassInfo_, allocate$bug6739756$1);
	return class$;
}

$Class* bug6739756$1::class$ = nullptr;