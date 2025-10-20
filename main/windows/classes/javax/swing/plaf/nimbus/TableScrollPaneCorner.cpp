#include <javax/swing/plaf/nimbus/TableScrollPaneCorner.h>

#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Painter.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $Painter = ::javax::swing::Painter;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _TableScrollPaneCorner_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TableScrollPaneCorner::*)()>(&TableScrollPaneCorner::init$))},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TableScrollPaneCorner_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.TableScrollPaneCorner",
	"javax.swing.JComponent",
	"javax.swing.plaf.UIResource",
	nullptr,
	_TableScrollPaneCorner_MethodInfo_
};

$Object* allocate$TableScrollPaneCorner($Class* clazz) {
	return $of($alloc(TableScrollPaneCorner));
}

$String* TableScrollPaneCorner::toString() {
	 return this->$JComponent::toString();
}

int32_t TableScrollPaneCorner::hashCode() {
	 return this->$JComponent::hashCode();
}

bool TableScrollPaneCorner::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* TableScrollPaneCorner::clone() {
	 return this->$JComponent::clone();
}

void TableScrollPaneCorner::finalize() {
	this->$JComponent::finalize();
}

void TableScrollPaneCorner::init$() {
	$JComponent::init$();
}

void TableScrollPaneCorner::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Painter, painter, $cast($Painter, $UIManager::get("TableHeader:\"TableHeader.renderer\"[Enabled].backgroundPainter"_s)));
	if (painter != nullptr) {
		if ($instanceOf($Graphics2D, g)) {
			$var($Graphics2D, var$0, $cast($Graphics2D, g));
			int32_t var$1 = getWidth() + 1;
			painter->paint(var$0, this, var$1, getHeight());
		} else {
			int32_t var$2 = getWidth();
			$var($BufferedImage, img, $new($BufferedImage, var$2, getHeight(), $BufferedImage::TYPE_INT_ARGB));
			$var($Graphics2D, g2, $cast($Graphics2D, img->getGraphics()));
			$var($Graphics2D, var$3, g2);
			int32_t var$4 = getWidth() + 1;
			painter->paint(var$3, this, var$4, getHeight());
			$nc(g2)->dispose();
			$nc(g)->drawImage(img, 0, 0, nullptr);
			$assign(img, nullptr);
		}
	}
}

TableScrollPaneCorner::TableScrollPaneCorner() {
}

$Class* TableScrollPaneCorner::load$($String* name, bool initialize) {
	$loadClass(TableScrollPaneCorner, name, initialize, &_TableScrollPaneCorner_ClassInfo_, allocate$TableScrollPaneCorner);
	return class$;
}

$Class* TableScrollPaneCorner::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax