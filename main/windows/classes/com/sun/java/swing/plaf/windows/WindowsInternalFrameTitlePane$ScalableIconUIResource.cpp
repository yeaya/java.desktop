#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$ScalableIconUIResource.h>

#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef SIZE

using $IconArray = $Array<::javax::swing::Icon>;
using $WindowsInternalFrameTitlePane = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsInternalFrameTitlePane$ScalableIconUIResource_FieldInfo_[] = {
	{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsInternalFrameTitlePane$ScalableIconUIResource, SIZE)},
	{"icons", "[Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane$ScalableIconUIResource, icons)},
	{}
};

$MethodInfo _WindowsInternalFrameTitlePane$ScalableIconUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsInternalFrameTitlePane$ScalableIconUIResource::*)($ObjectArray*)>(&WindowsInternalFrameTitlePane$ScalableIconUIResource::init$))},
	{"getBestIcon", "(I)Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsInternalFrameTitlePane$ScalableIconUIResource_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$ScalableIconUIResource", "com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane", "ScalableIconUIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WindowsInternalFrameTitlePane$ScalableIconUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$ScalableIconUIResource",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource",
	_WindowsInternalFrameTitlePane$ScalableIconUIResource_FieldInfo_,
	_WindowsInternalFrameTitlePane$ScalableIconUIResource_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsInternalFrameTitlePane$ScalableIconUIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane"
};

$Object* allocate$WindowsInternalFrameTitlePane$ScalableIconUIResource($Class* clazz) {
	return $of($alloc(WindowsInternalFrameTitlePane$ScalableIconUIResource));
}

int32_t WindowsInternalFrameTitlePane$ScalableIconUIResource::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsInternalFrameTitlePane$ScalableIconUIResource::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsInternalFrameTitlePane$ScalableIconUIResource::clone() {
	 return this->$Icon::clone();
}

$String* WindowsInternalFrameTitlePane$ScalableIconUIResource::toString() {
	 return this->$Icon::toString();
}

void WindowsInternalFrameTitlePane$ScalableIconUIResource::finalize() {
	this->$Icon::finalize();
}

void WindowsInternalFrameTitlePane$ScalableIconUIResource::init$($ObjectArray* objects) {
	$useLocalCurrentObjectStackCache();
	$set(this, icons, $new($IconArray, $nc(objects)->length));
	for (int32_t i = 0; i < objects->length; ++i) {
		if ($instanceOf($UIDefaults$LazyValue, objects->get(i))) {
			$nc(this->icons)->set(i, $cast($Icon, $($nc(($cast($UIDefaults$LazyValue, objects->get(i))))->createValue(nullptr))));
		} else {
			$nc(this->icons)->set(i, $cast($Icon, objects->get(i)));
		}
	}
}

$Icon* WindowsInternalFrameTitlePane$ScalableIconUIResource::getBestIcon(int32_t size) {
	$useLocalCurrentObjectStackCache();
	if (this->icons != nullptr && $nc(this->icons)->length > 0) {
		int32_t bestIndex = 0;
		int32_t minDiff = $Integer::MAX_VALUE;
		for (int32_t i = 0; i < $nc(this->icons)->length; ++i) {
			$var($Icon, icon, $nc(this->icons)->get(i));
			int32_t iconSize = 0;
			if (icon != nullptr && (iconSize = icon->getIconWidth()) > 0) {
				int32_t diff = $Math::abs(iconSize - size);
				if (diff < minDiff) {
					minDiff = diff;
					bestIndex = i;
				}
			}
		}
		return $nc(this->icons)->get(bestIndex);
	} else {
		return nullptr;
	}
}

void WindowsInternalFrameTitlePane$ScalableIconUIResource::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics2D, g2d, $cast($Graphics2D, $nc(g)->create()));
	int32_t size = getIconWidth();
	double scale = $nc($($nc(g2d)->getTransform()))->getScaleX();
	$var($Icon, icon, getBestIcon($cast(int32_t, (size * scale))));
	int32_t iconSize = 0;
	if (icon != nullptr && (iconSize = icon->getIconWidth()) > 0) {
		double drawScale = size / (double)iconSize;
		g2d->translate(x, y);
		g2d->scale(drawScale, drawScale);
		icon->paintIcon(c, g2d, 0, 0);
	}
	g2d->dispose();
}

int32_t WindowsInternalFrameTitlePane$ScalableIconUIResource::getIconWidth() {
	return WindowsInternalFrameTitlePane$ScalableIconUIResource::SIZE;
}

int32_t WindowsInternalFrameTitlePane$ScalableIconUIResource::getIconHeight() {
	return WindowsInternalFrameTitlePane$ScalableIconUIResource::SIZE;
}

WindowsInternalFrameTitlePane$ScalableIconUIResource::WindowsInternalFrameTitlePane$ScalableIconUIResource() {
}

$Class* WindowsInternalFrameTitlePane$ScalableIconUIResource::load$($String* name, bool initialize) {
	$loadClass(WindowsInternalFrameTitlePane$ScalableIconUIResource, name, initialize, &_WindowsInternalFrameTitlePane$ScalableIconUIResource_ClassInfo_, allocate$WindowsInternalFrameTitlePane$ScalableIconUIResource);
	return class$;
}

$Class* WindowsInternalFrameTitlePane$ScalableIconUIResource::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com