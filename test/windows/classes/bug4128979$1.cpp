#include <bug4128979$1.h>

#include <bug4128979.h>
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
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug4128979 = ::bug4128979;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _bug4128979$1_FieldInfo_[] = {
	{"this$0", "Lbug4128979;", nullptr, $FINAL | $SYNTHETIC, $field(bug4128979$1, this$0)},
	{}
};

$MethodInfo _bug4128979$1_MethodInfo_[] = {
	{"<init>", "(Lbug4128979;)V", nullptr, 0, $method(static_cast<void(bug4128979$1::*)($bug4128979*)>(&bug4128979$1::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4128979$1_EnclosingMethodInfo_ = {
	"bug4128979",
	"init",
	"()V"
};

$InnerClassInfo _bug4128979$1_InnerClassesInfo_[] = {
	{"bug4128979$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4128979$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4128979$1",
	"java.lang.Object",
	"javax.swing.Icon",
	_bug4128979$1_FieldInfo_,
	_bug4128979$1_MethodInfo_,
	nullptr,
	&_bug4128979$1_EnclosingMethodInfo_,
	_bug4128979$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4128979"
};

$Object* allocate$bug4128979$1($Class* clazz) {
	return $of($alloc(bug4128979$1));
}

void bug4128979$1::init$($bug4128979* this$0) {
	$set(this, this$0, this$0);
}

void bug4128979$1::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$nc(g)->setColor($($UIManager::getColor("ToggleButton.highlight"_s)));
	g->fillRect(x, y, 49, 49);
	g->setColor($$new($Color, ~$nc($($UIManager::getColor("ToggleButton.highlight"_s)))->getRGB()));
	g->drawRect(x, y, 49, 49);
}

int32_t bug4128979$1::getIconWidth() {
	return 50;
}

int32_t bug4128979$1::getIconHeight() {
	return 50;
}

bug4128979$1::bug4128979$1() {
}

$Class* bug4128979$1::load$($String* name, bool initialize) {
	$loadClass(bug4128979$1, name, initialize, &_bug4128979$1_ClassInfo_, allocate$bug4128979$1);
	return class$;
}

$Class* bug4128979$1::class$ = nullptr;