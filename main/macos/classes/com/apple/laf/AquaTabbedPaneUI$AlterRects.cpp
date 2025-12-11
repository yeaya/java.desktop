#include <com/apple/laf/AquaTabbedPaneUI$AlterRects.h>

#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneUI$AlterRects_FieldInfo_[] = {
	{"standard", "Ljava/awt/Rectangle;", nullptr, 0, $field(AquaTabbedPaneUI$AlterRects, standard)},
	{"first", "Ljava/awt/Rectangle;", nullptr, 0, $field(AquaTabbedPaneUI$AlterRects, first)},
	{"last", "Ljava/awt/Rectangle;", nullptr, 0, $field(AquaTabbedPaneUI$AlterRects, last)},
	{}
};

$MethodInfo _AquaTabbedPaneUI$AlterRects_MethodInfo_[] = {
	{"<init>", "(IIII)V", nullptr, 0, $method(static_cast<void(AquaTabbedPaneUI$AlterRects::*)(int32_t,int32_t,int32_t,int32_t)>(&AquaTabbedPaneUI$AlterRects::init$))},
	{"alter", "(Ljava/awt/Rectangle;Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $STATIC, $method(static_cast<$Rectangle*(*)($Rectangle*,$Rectangle*)>(&AquaTabbedPaneUI$AlterRects::alter))},
	{"end", "(IIII)Lcom/apple/laf/AquaTabbedPaneUI$AlterRects;", nullptr, 0},
	{"start", "(IIII)Lcom/apple/laf/AquaTabbedPaneUI$AlterRects;", nullptr, 0},
	{}
};

$InnerClassInfo _AquaTabbedPaneUI$AlterRects_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneUI$AlterRects", "com.apple.laf.AquaTabbedPaneUI", "AlterRects", $STATIC},
	{}
};

$ClassInfo _AquaTabbedPaneUI$AlterRects_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneUI$AlterRects",
	"java.lang.Object",
	nullptr,
	_AquaTabbedPaneUI$AlterRects_FieldInfo_,
	_AquaTabbedPaneUI$AlterRects_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneUI$AlterRects_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneUI"
};

$Object* allocate$AquaTabbedPaneUI$AlterRects($Class* clazz) {
	return $of($alloc(AquaTabbedPaneUI$AlterRects));
}

void AquaTabbedPaneUI$AlterRects::init$(int32_t x, int32_t y, int32_t w, int32_t h) {
	$set(this, standard, $new($Rectangle, x, y, w, h));
}

AquaTabbedPaneUI$AlterRects* AquaTabbedPaneUI$AlterRects::start(int32_t x, int32_t y, int32_t w, int32_t h) {
	$set(this, first, $new($Rectangle, x, y, w, h));
	return this;
}

AquaTabbedPaneUI$AlterRects* AquaTabbedPaneUI$AlterRects::end(int32_t x, int32_t y, int32_t w, int32_t h) {
	$set(this, last, $new($Rectangle, x, y, w, h));
	return this;
}

$Rectangle* AquaTabbedPaneUI$AlterRects::alter($Rectangle* r, $Rectangle* o) {
	$nc(r)->x += $nc(o)->x;
	r->y += o->y;
	r->width += o->width;
	r->height += o->height;
	return r;
}

AquaTabbedPaneUI$AlterRects::AquaTabbedPaneUI$AlterRects() {
}

$Class* AquaTabbedPaneUI$AlterRects::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneUI$AlterRects, name, initialize, &_AquaTabbedPaneUI$AlterRects_ClassInfo_, allocate$AquaTabbedPaneUI$AlterRects);
	return class$;
}

$Class* AquaTabbedPaneUI$AlterRects::class$ = nullptr;

		} // laf
	} // apple
} // com