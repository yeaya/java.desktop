#include <JInternalFrameIconTest$2$1.h>

#include <JInternalFrameIconTest$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $JInternalFrameIconTest$2 = ::JInternalFrameIconTest$2;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

$FieldInfo _JInternalFrameIconTest$2$1_FieldInfo_[] = {
	{"this$0", "LJInternalFrameIconTest$2;", nullptr, $FINAL | $SYNTHETIC, $field(JInternalFrameIconTest$2$1, this$0)},
	{}
};

$MethodInfo _JInternalFrameIconTest$2$1_MethodInfo_[] = {
	{"<init>", "(LJInternalFrameIconTest$2;)V", nullptr, 0, $method(static_cast<void(JInternalFrameIconTest$2$1::*)($JInternalFrameIconTest$2*)>(&JInternalFrameIconTest$2$1::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JInternalFrameIconTest$2$1_EnclosingMethodInfo_ = {
	"JInternalFrameIconTest$2",
	"run",
	"()V"
};

$InnerClassInfo _JInternalFrameIconTest$2$1_InnerClassesInfo_[] = {
	{"JInternalFrameIconTest$2", nullptr, nullptr, 0},
	{"JInternalFrameIconTest$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JInternalFrameIconTest$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"JInternalFrameIconTest$2$1",
	"java.lang.Object",
	"javax.swing.Icon",
	_JInternalFrameIconTest$2$1_FieldInfo_,
	_JInternalFrameIconTest$2$1_MethodInfo_,
	nullptr,
	&_JInternalFrameIconTest$2$1_EnclosingMethodInfo_,
	_JInternalFrameIconTest$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JInternalFrameIconTest"
};

$Object* allocate$JInternalFrameIconTest$2$1($Class* clazz) {
	return $of($alloc(JInternalFrameIconTest$2$1));
}

void JInternalFrameIconTest$2$1::init$($JInternalFrameIconTest$2* this$0) {
	$set(this, this$0, this$0);
}

int32_t JInternalFrameIconTest$2$1::getIconWidth() {
	return 16;
}

int32_t JInternalFrameIconTest$2$1::getIconHeight() {
	return 16;
}

void JInternalFrameIconTest$2$1::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$init($Color);
	$nc(g)->setColor($Color::black);
	g->fillRect(x, y, 16, 16);
}

JInternalFrameIconTest$2$1::JInternalFrameIconTest$2$1() {
}

$Class* JInternalFrameIconTest$2$1::load$($String* name, bool initialize) {
	$loadClass(JInternalFrameIconTest$2$1, name, initialize, &_JInternalFrameIconTest$2$1_ClassInfo_, allocate$JInternalFrameIconTest$2$1);
	return class$;
}

$Class* JInternalFrameIconTest$2$1::class$ = nullptr;