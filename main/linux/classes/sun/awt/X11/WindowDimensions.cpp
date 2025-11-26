#include <sun/awt/X11/WindowDimensions.h>

#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _WindowDimensions_FieldInfo_[] = {
	{"loc", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(WindowDimensions, loc)},
	{"size", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(WindowDimensions, size)},
	{"insets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(WindowDimensions, insets)},
	{"isClientSizeSet", "Z", nullptr, $PRIVATE, $field(WindowDimensions, isClientSizeSet$)},
	{}
};

$MethodInfo _WindowDimensions_MethodInfo_[] = {
	{"<init>", "(IIIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(WindowDimensions::*)(int32_t,int32_t,int32_t,int32_t,bool)>(&WindowDimensions::init$))},
	{"<init>", "(Ljava/awt/Rectangle;Ljava/awt/Insets;Z)V", nullptr, $PUBLIC, $method(static_cast<void(WindowDimensions::*)($Rectangle*,$Insets*,bool)>(&WindowDimensions::init$))},
	{"<init>", "(Ljava/awt/Point;Ljava/awt/Dimension;Ljava/awt/Insets;Z)V", nullptr, $PUBLIC, $method(static_cast<void(WindowDimensions::*)($Point*,$Dimension*,$Insets*,bool)>(&WindowDimensions::init$))},
	{"<init>", "(Ljava/awt/Rectangle;Z)V", nullptr, $PUBLIC, $method(static_cast<void(WindowDimensions::*)($Rectangle*,bool)>(&WindowDimensions::init$))},
	{"<init>", "(Lsun/awt/X11/WindowDimensions;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowDimensions::*)(WindowDimensions*)>(&WindowDimensions::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getClientRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getClientSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getScreenBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isClientSizeSet", "()Z", nullptr, $PUBLIC},
	{"setClientSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setClientSize", "(II)V", nullptr, $PUBLIC},
	{"setInsets", "(Ljava/awt/Insets;)V", nullptr, $PUBLIC},
	{"setLocation", "(II)V", nullptr, $PUBLIC},
	{"setSize", "(II)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowDimensions_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.WindowDimensions",
	"java.lang.Object",
	nullptr,
	_WindowDimensions_FieldInfo_,
	_WindowDimensions_MethodInfo_
};

$Object* allocate$WindowDimensions($Class* clazz) {
	return $of($alloc(WindowDimensions));
}

void WindowDimensions::init$(int32_t x, int32_t y, int32_t width, int32_t height, bool isClient) {
	WindowDimensions::init$($$new($Rectangle, x, y, width, height), nullptr, isClient);
}

void WindowDimensions::init$($Rectangle* rec, $Insets* ins, bool isClient) {
	if (rec == nullptr) {
		$throwNew($IllegalArgumentException, "Client bounds can\'t be null"_s);
	}
	this->isClientSizeSet$ = isClient;
	$set(this, loc, $nc(rec)->getLocation());
	$set(this, size, rec->getSize());
	setInsets(ins);
}

void WindowDimensions::init$($Point* loc, $Dimension* size, $Insets* in, bool isClient) {
	WindowDimensions::init$($$new($Rectangle, loc, size), in, isClient);
}

void WindowDimensions::init$($Rectangle* bounds, bool isClient) {
	WindowDimensions::init$(bounds, nullptr, isClient);
}

void WindowDimensions::init$(WindowDimensions* dims) {
	$set(this, loc, $new($Point, $nc(dims)->loc));
	$set(this, size, $new($Dimension, $nc(dims)->size));
	$set(this, insets, ($nc(dims)->insets != nullptr) ? ($cast($Insets, $nc($nc(dims)->insets)->clone())) : $new($Insets, 0, 0, 0, 0));
	this->isClientSizeSet$ = dims->isClientSizeSet$;
}

$Rectangle* WindowDimensions::getClientRect() {
	if (this->isClientSizeSet$) {
		return $new($Rectangle, this->loc, this->size);
	} else if (this->insets != nullptr) {
		return $new($Rectangle, $nc(this->loc)->x, $nc(this->loc)->y, $nc(this->size)->width - ($nc(this->insets)->left + $nc(this->insets)->right), $nc(this->size)->height - ($nc(this->insets)->top + $nc(this->insets)->bottom));
	} else {
		return $new($Rectangle, this->loc, this->size);
	}
}

void WindowDimensions::setClientSize($Dimension* size) {
	$set(this, size, $new($Dimension, size));
	this->isClientSizeSet$ = true;
}

void WindowDimensions::setClientSize(int32_t width, int32_t height) {
	$set(this, size, $new($Dimension, width, height));
	this->isClientSizeSet$ = true;
}

$Dimension* WindowDimensions::getClientSize() {
	return $nc($(getClientRect()))->getSize();
}

void WindowDimensions::setSize(int32_t width, int32_t height) {
	$set(this, size, $new($Dimension, width, height));
	this->isClientSizeSet$ = false;
}

$Dimension* WindowDimensions::getSize() {
	return $nc($(getBounds()))->getSize();
}

$Insets* WindowDimensions::getInsets() {
	return $cast($Insets, $nc(this->insets)->clone());
}

$Rectangle* WindowDimensions::getBounds() {
	if (this->isClientSizeSet$) {
		$var($Rectangle, res, $new($Rectangle, this->loc, this->size));
		res->width += ($nc(this->insets)->left + $nc(this->insets)->right);
		res->height += ($nc(this->insets)->top + $nc(this->insets)->bottom);
		return res;
	} else {
		return $new($Rectangle, this->loc, this->size);
	}
}

$Point* WindowDimensions::getLocation() {
	return $new($Point, this->loc);
}

void WindowDimensions::setLocation(int32_t x, int32_t y) {
	$set(this, loc, $new($Point, x, y));
}

$Rectangle* WindowDimensions::getScreenBounds() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, getClientSize());
	$var($Point, location, getLocation());
	$nc(location)->x += $nc(this->insets)->left;
	location->y += $nc(this->insets)->top;
	return $new($Rectangle, location, size);
}

void WindowDimensions::setInsets($Insets* in) {
	$set(this, insets, (in != nullptr) ? ($cast($Insets, $nc(in)->clone())) : $new($Insets, 0, 0, 0, 0));
	if (!this->isClientSizeSet$) {
		if ($nc(this->size)->width < ($nc(this->insets)->left + $nc(this->insets)->right)) {
			$nc(this->size)->width = ($nc(this->insets)->left + $nc(this->insets)->right);
		}
		if ($nc(this->size)->height < ($nc(this->insets)->top + $nc(this->insets)->bottom)) {
			$nc(this->size)->height = ($nc(this->insets)->top + $nc(this->insets)->bottom);
		}
	}
}

bool WindowDimensions::isClientSizeSet() {
	return this->isClientSizeSet$;
}

$String* WindowDimensions::toString() {
	return $str({"["_s, this->loc, ", "_s, this->size, "("_s, (this->isClientSizeSet$ ? "client"_s : "bounds"_s), ")+"_s, this->insets, "]"_s});
}

bool WindowDimensions::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(WindowDimensions, o))) {
		return false;
	}
	$var(WindowDimensions, dims, $cast(WindowDimensions, o));
	bool var$1 = ($nc($nc(dims)->insets)->equals(this->insets));
	bool var$0 = var$1 && ($nc($(getClientRect()))->equals($(dims->getClientRect())));
	return var$0 && ($nc($(getBounds()))->equals($(dims->getBounds())));
}

int32_t WindowDimensions::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t var$1 = ((this->insets == nullptr) ? (0) : ($nc(this->insets)->hashCode()));
	int32_t var$0 = var$1 ^ $nc($(getClientRect()))->hashCode();
	return var$0 ^ $nc($(getBounds()))->hashCode();
}

WindowDimensions::WindowDimensions() {
}

$Class* WindowDimensions::load$($String* name, bool initialize) {
	$loadClass(WindowDimensions, name, initialize, &_WindowDimensions_ClassInfo_, allocate$WindowDimensions);
	return class$;
}

$Class* WindowDimensions::class$ = nullptr;

		} // X11
	} // awt
} // sun