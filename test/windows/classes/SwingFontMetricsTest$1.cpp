#include <SwingFontMetricsTest$1.h>

#include <SwingFontMetricsTest.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

#undef KEY_TEXT_ANTIALIASING
#undef TEXT

using $SwingFontMetricsTest = ::SwingFontMetricsTest;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;

$FieldInfo _SwingFontMetricsTest$1_FieldInfo_[] = {
	{"val$frame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(SwingFontMetricsTest$1, val$frame)},
	{}
};

$MethodInfo _SwingFontMetricsTest$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/swing/JFrame;)V", nullptr, 0, $method(static_cast<void(SwingFontMetricsTest$1::*)($String*,$JFrame*)>(&SwingFontMetricsTest$1::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SwingFontMetricsTest$1_EnclosingMethodInfo_ = {
	"SwingFontMetricsTest",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _SwingFontMetricsTest$1_InnerClassesInfo_[] = {
	{"SwingFontMetricsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingFontMetricsTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"SwingFontMetricsTest$1",
	"javax.swing.JLabel",
	nullptr,
	_SwingFontMetricsTest$1_FieldInfo_,
	_SwingFontMetricsTest$1_MethodInfo_,
	nullptr,
	&_SwingFontMetricsTest$1_EnclosingMethodInfo_,
	_SwingFontMetricsTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SwingFontMetricsTest"
};

$Object* allocate$SwingFontMetricsTest$1($Class* clazz) {
	return $of($alloc(SwingFontMetricsTest$1));
}

void SwingFontMetricsTest$1::init$($String* arg0, $JFrame* val$frame) {
	$set(this, val$frame, val$frame);
	$JLabel::init$(arg0);
}

void SwingFontMetricsTest$1::paint($Graphics* g) {
	$JLabel::paint(g);
	$var($Font, font, getFont());
	$var($Graphics2D, g2d, $cast($Graphics2D, g));
	$init($SwingFontMetricsTest);
	int32_t width1 = $nc($(getFontMetrics(font)))->stringWidth($SwingFontMetricsTest::TEXT);
	$init($RenderingHints);
	$nc(g2d)->setRenderingHint($RenderingHints::KEY_TEXT_ANTIALIASING, $SwingFontMetricsTest::aaHint);
	int32_t width2 = $nc($($nc(g)->getFontMetrics(font)))->stringWidth($SwingFontMetricsTest::TEXT);
	$SwingFontMetricsTest::passed = (width1 == width2);
	$nc($SwingFontMetricsTest::latch)->countDown();
	$nc(this->val$frame)->dispose();
}

SwingFontMetricsTest$1::SwingFontMetricsTest$1() {
}

$Class* SwingFontMetricsTest$1::load$($String* name, bool initialize) {
	$loadClass(SwingFontMetricsTest$1, name, initialize, &_SwingFontMetricsTest$1_ClassInfo_, allocate$SwingFontMetricsTest$1);
	return class$;
}

$Class* SwingFontMetricsTest$1::class$ = nullptr;