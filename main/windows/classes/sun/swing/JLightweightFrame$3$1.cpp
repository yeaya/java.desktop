#include <sun/swing/JLightweightFrame$3$1.h>

#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JPanel.h>
#include <sun/swing/JLightweightFrame$3.h>
#include <sun/swing/JLightweightFrame.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JPanel = ::javax::swing::JPanel;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;
using $JLightweightFrame$3 = ::sun::swing::JLightweightFrame$3;

namespace sun {
	namespace swing {

$FieldInfo _JLightweightFrame$3$1_FieldInfo_[] = {
	{"this$1", "Lsun/swing/JLightweightFrame$3;", nullptr, $FINAL | $SYNTHETIC, $field(JLightweightFrame$3$1, this$1)},
	{"val$clip", "Ljava/awt/Rectangle;", nullptr, $FINAL | $SYNTHETIC, $field(JLightweightFrame$3$1, val$clip)},
	{}
};

$MethodInfo _JLightweightFrame$3$1_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/JLightweightFrame$3;Ljava/awt/Rectangle;)V", "()V", 0, $method(static_cast<void(JLightweightFrame$3$1::*)($JLightweightFrame$3*,$Rectangle*)>(&JLightweightFrame$3$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JLightweightFrame$3$1_EnclosingMethodInfo_ = {
	"sun.swing.JLightweightFrame$3",
	"paint",
	"(Ljava/awt/Graphics;)V"
};

$InnerClassInfo _JLightweightFrame$3$1_InnerClassesInfo_[] = {
	{"sun.swing.JLightweightFrame$3", nullptr, nullptr, 0},
	{"sun.swing.JLightweightFrame$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JLightweightFrame$3$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.JLightweightFrame$3$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_JLightweightFrame$3$1_FieldInfo_,
	_JLightweightFrame$3$1_MethodInfo_,
	nullptr,
	&_JLightweightFrame$3$1_EnclosingMethodInfo_,
	_JLightweightFrame$3$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.JLightweightFrame"
};

$Object* allocate$JLightweightFrame$3$1($Class* clazz) {
	return $of($alloc(JLightweightFrame$3$1));
}

void JLightweightFrame$3$1::init$($JLightweightFrame$3* this$1, $Rectangle* val$clip) {
	$set(this, this$1, this$1);
	$set(this, val$clip, val$clip);
}

void JLightweightFrame$3$1::run() {
	$var($Rectangle, c, $nc($($nc($nc(this->this$1->this$0)->contentPane)->getBounds()))->intersection(this->val$clip));
	$nc(this->this$1->this$0)->notifyImageUpdated($nc(c)->x, c->y, c->width, c->height);
}

JLightweightFrame$3$1::JLightweightFrame$3$1() {
}

$Class* JLightweightFrame$3$1::load$($String* name, bool initialize) {
	$loadClass(JLightweightFrame$3$1, name, initialize, &_JLightweightFrame$3$1_ClassInfo_, allocate$JLightweightFrame$3$1);
	return class$;
}

$Class* JLightweightFrame$3$1::class$ = nullptr;

	} // swing
} // sun