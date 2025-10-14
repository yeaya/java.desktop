#include <AliasingTest$1.h>

#include <AliasingTest.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

#undef KEY_ANTIALIASING
#undef VALUE_ANTIALIAS_ON

using $AliasingTest = ::AliasingTest;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;

$MethodInfo _AliasingTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AliasingTest$1::*)()>(&AliasingTest$1::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AliasingTest$1_EnclosingMethodInfo_ = {
	"AliasingTest",
	"createHtmlViewer",
	"(Z)Ljava/awt/Component;"
};

$InnerClassInfo _AliasingTest$1_InnerClassesInfo_[] = {
	{"AliasingTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AliasingTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"AliasingTest$1",
	"javax.swing.JEditorPane",
	nullptr,
	nullptr,
	_AliasingTest$1_MethodInfo_,
	nullptr,
	&_AliasingTest$1_EnclosingMethodInfo_,
	_AliasingTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AliasingTest"
};

$Object* allocate$AliasingTest$1($Class* clazz) {
	return $of($alloc(AliasingTest$1));
}

void AliasingTest$1::init$() {
	$JEditorPane::init$();
}

void AliasingTest$1::paint($Graphics* g) {
	$var($Graphics2D, g2d, $cast($Graphics2D, $nc(g)->create()));
	$init($RenderingHints);
	$nc(g2d)->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
	$JEditorPane::paint(g2d);
	g2d->dispose();
}

AliasingTest$1::AliasingTest$1() {
}

$Class* AliasingTest$1::load$($String* name, bool initialize) {
	$loadClass(AliasingTest$1, name, initialize, &_AliasingTest$1_ClassInfo_, allocate$AliasingTest$1);
	return class$;
}

$Class* AliasingTest$1::class$ = nullptr;