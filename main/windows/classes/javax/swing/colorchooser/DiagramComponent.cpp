#include <javax/swing/colorchooser/DiagramComponent.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/colorchooser/ColorPanel.h>
#include <jcpp.h>

#undef BLACK
#undef TYPE_INT_RGB
#undef WHITE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ColorPanel = ::javax::swing::colorchooser::ColorPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _DiagramComponent_FieldInfo_[] = {
	{"panel", "Ljavax/swing/colorchooser/ColorPanel;", nullptr, $PRIVATE | $FINAL, $field(DiagramComponent, panel)},
	{"diagram", "Z", nullptr, $PRIVATE | $FINAL, $field(DiagramComponent, diagram)},
	{"insets", "Ljava/awt/Insets;", nullptr, $PRIVATE | $FINAL, $field(DiagramComponent, insets$)},
	{"width", "I", nullptr, $PRIVATE, $field(DiagramComponent, width)},
	{"height", "I", nullptr, $PRIVATE, $field(DiagramComponent, height)},
	{"array", "[I", nullptr, $PRIVATE, $field(DiagramComponent, array)},
	{"image", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(DiagramComponent, image)},
	{}
};

$MethodInfo _DiagramComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/colorchooser/ColorPanel;Z)V", nullptr, 0, $method(static_cast<void(DiagramComponent::*)($ColorPanel*,bool)>(&DiagramComponent::init$))},
	{"getValue", "(FII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(float,int32_t,int32_t)>(&DiagramComponent::getValue))},
	{"getValue", "(III)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)(int32_t,int32_t,int32_t)>(&DiagramComponent::getValue))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DiagramComponent_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.colorchooser.DiagramComponent",
	"javax.swing.JComponent",
	"java.awt.event.MouseListener,java.awt.event.MouseMotionListener",
	_DiagramComponent_FieldInfo_,
	_DiagramComponent_MethodInfo_
};

$Object* allocate$DiagramComponent($Class* clazz) {
	return $of($alloc(DiagramComponent));
}

$String* DiagramComponent::toString() {
	 return this->$JComponent::toString();
}

int32_t DiagramComponent::hashCode() {
	 return this->$JComponent::hashCode();
}

bool DiagramComponent::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* DiagramComponent::clone() {
	 return this->$JComponent::clone();
}

void DiagramComponent::finalize() {
	this->$JComponent::finalize();
}

void DiagramComponent::init$($ColorPanel* panel, bool diagram) {
	$JComponent::init$();
	$set(this, insets$, $new($Insets, 0, 0, 0, 0));
	$set(this, panel, panel);
	this->diagram = diagram;
	addMouseListener(this);
	addMouseMotionListener(this);
}

void DiagramComponent::paintComponent($Graphics* g) {
	getInsets(this->insets$);
	this->width = getWidth() - $nc(this->insets$)->left - $nc(this->insets$)->right;
	this->height = getHeight() - $nc(this->insets$)->top - $nc(this->insets$)->bottom;
	if ((this->width <= 0) || (this->height <= 0)) {
		return;
	}
	bool var$0 = (this->image == nullptr) || (this->width != $nc(this->image)->getWidth());
	bool update = var$0 || (this->height != $nc(this->image)->getHeight());
	if (update) {
		int32_t size = this->width * this->height;
		if ((this->array == nullptr) || ($nc(this->array)->length < size)) {
			$set(this, array, $new($ints, size));
		}
		$set(this, image, $new($BufferedImage, this->width, this->height, $BufferedImage::TYPE_INT_RGB));
	}
	{
		float dx = 1.0f / (float)(this->width - 1);
		float dy = 1.0f / (float)(this->height - 1);
		int32_t offset = 0;
		float y = 0.0f;
		for (int32_t h = 0; h < this->height; ++h, y += dy) {
			if (this->diagram) {
				float x = 0.0f;
				for (int32_t w = 0; w < this->width; ++w, x += dx, ++offset) {
					$nc(this->array)->set(offset, $nc(this->panel)->getColor(x, y));
				}
			} else {
				int32_t color = $nc(this->panel)->getColor(y);
				for (int32_t w = 0; w < this->width; ++w, ++offset) {
					$nc(this->array)->set(offset, color);
				}
			}
		}
	}
	$nc(this->image)->setRGB(0, 0, this->width, this->height, this->array, 0, this->width);
	$nc(g)->drawImage(this->image, $nc(this->insets$)->left, $nc(this->insets$)->top, this->width, this->height, this);
	if (isEnabled()) {
		--this->width;
		--this->height;
		$init($Color);
		g->setXORMode($Color::WHITE);
		g->setColor($Color::BLACK);
		if (this->diagram) {
			int32_t x = getValue($nc(this->panel)->getValueX(), $nc(this->insets$)->left, this->width);
			int32_t y = getValue($nc(this->panel)->getValueY(), $nc(this->insets$)->top, this->height);
			g->drawLine(x - 8, y, x + 8, y);
			g->drawLine(x, y - 8, x, y + 8);
		} else {
			int32_t z = getValue($nc(this->panel)->getValueZ(), $nc(this->insets$)->top, this->height);
			g->drawLine($nc(this->insets$)->left, z, $nc(this->insets$)->left + this->width, z);
		}
		g->setPaintMode();
	}
}

void DiagramComponent::mousePressed($MouseEvent* event) {
	mouseDragged(event);
}

void DiagramComponent::mouseReleased($MouseEvent* event) {
}

void DiagramComponent::mouseClicked($MouseEvent* event) {
}

void DiagramComponent::mouseEntered($MouseEvent* event) {
}

void DiagramComponent::mouseExited($MouseEvent* event) {
}

void DiagramComponent::mouseMoved($MouseEvent* event) {
}

void DiagramComponent::mouseDragged($MouseEvent* event) {
	if (isEnabled()) {
		float y = getValue($nc(event)->getY(), $nc(this->insets$)->top, this->height);
		if (this->diagram) {
			float x = getValue($nc(event)->getX(), $nc(this->insets$)->left, this->width);
			$nc(this->panel)->setValue(x, y);
		} else {
			$nc(this->panel)->setValue(y);
		}
	}
}

int32_t DiagramComponent::getValue(float value, int32_t min, int32_t max) {
	$init(DiagramComponent);
	return min + $cast(int32_t, (value * (float)(max)));
}

float DiagramComponent::getValue(int32_t value, int32_t min, int32_t max) {
	$init(DiagramComponent);
	if (min < value) {
		value -= min;
		return (value < max) ? (float)value / (float)max : 1.0f;
	}
	return 0.0f;
}

DiagramComponent::DiagramComponent() {
}

$Class* DiagramComponent::load$($String* name, bool initialize) {
	$loadClass(DiagramComponent, name, initialize, &_DiagramComponent_ClassInfo_, allocate$DiagramComponent);
	return class$;
}

$Class* DiagramComponent::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax