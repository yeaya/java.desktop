#include <bug6209975$MyIcon.h>

#include <bug6209975$ReturnObject.h>
#include <bug6209975.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

#undef BLACK

using $bug6209975$ReturnObject = ::bug6209975$ReturnObject;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug6209975$MyIcon_FieldInfo_[] = {
	{"thisObject", "Lbug6209975$ReturnObject;", nullptr, 0, $field(bug6209975$MyIcon, thisObject)},
	{}
};

$MethodInfo _bug6209975$MyIcon_MethodInfo_[] = {
	{"<init>", "(Lbug6209975$ReturnObject;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6209975$MyIcon::*)($bug6209975$ReturnObject*)>(&bug6209975$MyIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6209975$MyIcon_InnerClassesInfo_[] = {
	{"bug6209975$MyIcon", "bug6209975", "MyIcon", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _bug6209975$MyIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6209975$MyIcon",
	"java.lang.Object",
	"javax.swing.Icon",
	_bug6209975$MyIcon_FieldInfo_,
	_bug6209975$MyIcon_MethodInfo_,
	nullptr,
	nullptr,
	_bug6209975$MyIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6209975"
};

$Object* allocate$bug6209975$MyIcon($Class* clazz) {
	return $of($alloc(bug6209975$MyIcon));
}

void bug6209975$MyIcon::init$($bug6209975$ReturnObject* ro) {
	$set(this, thisObject, nullptr);
	$set(this, thisObject, ro);
}

void bug6209975$MyIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($Color, color, $nc(g)->getColor());
	$init($Color);
	g->setColor($Color::BLACK);
	g->fillRect(x, y, 10, 10);
	g->setColor(color);
	$nc(this->thisObject)->itsValue = x;
}

int32_t bug6209975$MyIcon::getIconWidth() {
	return 10;
}

int32_t bug6209975$MyIcon::getIconHeight() {
	return 10;
}

bug6209975$MyIcon::bug6209975$MyIcon() {
}

$Class* bug6209975$MyIcon::load$($String* name, bool initialize) {
	$loadClass(bug6209975$MyIcon, name, initialize, &_bug6209975$MyIcon_ClassInfo_, allocate$bug6209975$MyIcon);
	return class$;
}

$Class* bug6209975$MyIcon::class$ = nullptr;