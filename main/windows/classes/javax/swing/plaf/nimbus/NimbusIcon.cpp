#include <javax/swing/plaf/nimbus/NimbusIcon.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/Painter.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusStyle.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthIcon.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef EAST
#undef HORIZONTAL
#undef LARGE_KEY
#undef LARGE_SCALE
#undef MINI_KEY
#undef MINI_SCALE
#undef SMALL_KEY
#undef SMALL_SCALE
#undef SOUTH
#undef TYPE_INT_ARGB
#undef VERTICAL

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JToolBar = ::javax::swing::JToolBar;
using $Painter = ::javax::swing::Painter;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $NimbusStyle = ::javax::swing::plaf::nimbus::NimbusStyle;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthIcon = ::javax::swing::plaf::synth::SynthIcon;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusIcon_FieldInfo_[] = {
	{"width", "I", nullptr, $PRIVATE, $field(NimbusIcon, width)},
	{"height", "I", nullptr, $PRIVATE, $field(NimbusIcon, height)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusIcon, prefix)},
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusIcon, key)},
	{}
};

$MethodInfo _NimbusIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, 0, $method(static_cast<void(NimbusIcon::*)($String*,$String*,int32_t,int32_t)>(&NimbusIcon::init$))},
	{"getIconHeight", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC},
	{"getIconWidth", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC},
	{"paintFilter", "(Ljavax/swing/Painter;)Ljavax/swing/Painter;", "(Ljavax/swing/Painter;)Ljavax/swing/Painter<Ljavax/swing/JComponent;>;", $PRIVATE | $STATIC, $method(static_cast<$Painter*(*)($Painter*)>(&NimbusIcon::paintFilter))},
	{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"scale", "(Ljavax/swing/plaf/synth/SynthContext;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(NimbusIcon::*)($SynthContext*,int32_t)>(&NimbusIcon::scale))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NimbusIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusIcon",
	"java.lang.Object",
	"javax.swing.plaf.synth.SynthIcon,javax.swing.plaf.UIResource",
	_NimbusIcon_FieldInfo_,
	_NimbusIcon_MethodInfo_
};

$Object* allocate$NimbusIcon($Class* clazz) {
	return $of($alloc(NimbusIcon));
}

int32_t NimbusIcon::hashCode() {
	 return this->$SynthIcon::hashCode();
}

bool NimbusIcon::equals(Object$* arg0) {
	 return this->$SynthIcon::equals(arg0);
}

$Object* NimbusIcon::clone() {
	 return this->$SynthIcon::clone();
}

$String* NimbusIcon::toString() {
	 return this->$SynthIcon::toString();
}

void NimbusIcon::finalize() {
	this->$SynthIcon::finalize();
}

void NimbusIcon::init$($String* prefix, $String* key, int32_t w, int32_t h) {
	this->width = w;
	this->height = h;
	$set(this, prefix, prefix);
	$set(this, key, key);
}

$Painter* NimbusIcon::paintFilter($Painter* painter) {
	$init(NimbusIcon);
	return painter;
}

void NimbusIcon::paintIcon($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Painter, painter, nullptr);
	if (context != nullptr) {
		$assign(painter, paintFilter($cast($Painter, $($nc($(context->getStyle()))->get(context, this->key)))));
	}
	if (painter == nullptr) {
		$assign(painter, paintFilter($cast($Painter, $($UIManager::get($$str({this->prefix, "[Enabled]."_s, this->key}))))));
	}
	if (painter != nullptr && context != nullptr) {
		$var($JComponent, c, context->getComponent());
		bool rotate = false;
		bool flip = false;
		int32_t translatex = 0;
		int32_t translatey = 0;
		if ($instanceOf($JToolBar, c)) {
			$var($JToolBar, toolbar, $cast($JToolBar, c));
			rotate = $nc(toolbar)->getOrientation() == $JToolBar::VERTICAL;
			flip = !$nc($(toolbar->getComponentOrientation()))->isLeftToRight();
			$var($Object, o, $NimbusLookAndFeel::resolveToolbarConstraint(toolbar));
			if ($instanceOf($UIResource, $(toolbar->getBorder()))) {
				$init($BorderLayout);
				if ($equals(o, $BorderLayout::SOUTH)) {
					translatey = 1;
				} else {
					if ($equals(o, $BorderLayout::EAST)) {
						translatex = 1;
					}
				}
			}
		} else if ($instanceOf($JMenu, c)) {
			flip = !$nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
		}
		if ($instanceOf($Graphics2D, g)) {
			$var($Graphics2D, gfx, $cast($Graphics2D, g));
			$nc(gfx)->translate(x, y);
			gfx->translate(translatex, translatey);
			if (rotate) {
				gfx->rotate($Math::toRadians((double)90));
				gfx->translate(0, -w);
				painter->paint(gfx, $(context->getComponent()), h, w);
				gfx->translate(0, w);
				gfx->rotate($Math::toRadians((double)-90));
			} else if (flip) {
				gfx->scale((double)-1, (double)1);
				gfx->translate(-w, 0);
				painter->paint(gfx, $(context->getComponent()), w, h);
				gfx->translate(w, 0);
				gfx->scale((double)-1, (double)1);
			} else {
				painter->paint(gfx, $(context->getComponent()), w, h);
			}
			gfx->translate(-translatex, -translatey);
			gfx->translate(-x, -y);
		} else {
			$var($BufferedImage, img, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB));
			$var($Graphics2D, gfx, img->createGraphics());
			if (rotate) {
				$nc(gfx)->rotate($Math::toRadians((double)90));
				gfx->translate(0, -w);
				painter->paint(gfx, $(context->getComponent()), h, w);
			} else if (flip) {
				$nc(gfx)->scale((double)-1, (double)1);
				gfx->translate(-w, 0);
				painter->paint(gfx, $(context->getComponent()), w, h);
			} else {
				painter->paint(gfx, $(context->getComponent()), w, h);
			}
			$nc(gfx)->dispose();
			$nc(g)->drawImage(img, x, y, nullptr);
			$assign(img, nullptr);
		}
	}
}

void NimbusIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Painter, painter, paintFilter($cast($Painter, $($UIManager::get($$str({this->prefix, "[Enabled]."_s, this->key}))))));
	if (painter != nullptr) {
		$var($JComponent, jc, ($instanceOf($JComponent, c)) ? $cast($JComponent, c) : ($JComponent*)nullptr);
		$var($Graphics2D, gfx, $cast($Graphics2D, g));
		$nc(gfx)->translate(x, y);
		painter->paint(gfx, jc, this->width, this->height);
		gfx->translate(-x, -y);
	}
}

int32_t NimbusIcon::getIconWidth($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	if (context == nullptr) {
		return this->width;
	}
	$var($JComponent, c, $nc(context)->getComponent());
	if ($instanceOf($JToolBar, c) && $nc(($cast($JToolBar, c)))->getOrientation() == $JToolBar::VERTICAL) {
		if ($instanceOf($UIResource, $($nc(c)->getBorder()))) {
			return c->getWidth() - 1;
		} else {
			return c->getWidth();
		}
	} else {
		return scale(context, this->width);
	}
}

int32_t NimbusIcon::getIconHeight($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	if (context == nullptr) {
		return this->height;
	}
	$var($JComponent, c, $nc(context)->getComponent());
	if ($instanceOf($JToolBar, c)) {
		$var($JToolBar, toolbar, $cast($JToolBar, c));
		if ($nc(toolbar)->getOrientation() == $JToolBar::HORIZONTAL) {
			if ($instanceOf($UIResource, $(toolbar->getBorder()))) {
				return $nc(c)->getHeight() - 1;
			} else {
				return $nc(c)->getHeight();
			}
		} else {
			return scale(context, this->width);
		}
	} else {
		return scale(context, this->height);
	}
}

int32_t NimbusIcon::scale($SynthContext* context, int32_t size) {
	$useLocalCurrentObjectStackCache();
	if (context == nullptr || $nc(context)->getComponent() == nullptr) {
		return size;
	}
	$var($String, scaleKey, $cast($String, $nc($($nc(context)->getComponent()))->getClientProperty("JComponent.sizeVariant"_s)));
	if (scaleKey != nullptr) {
		$init($NimbusStyle);
		if ($nc($NimbusStyle::LARGE_KEY)->equals(scaleKey)) {
			size *= $NimbusStyle::LARGE_SCALE;
		} else {
			if ($nc($NimbusStyle::SMALL_KEY)->equals(scaleKey)) {
				size *= $NimbusStyle::SMALL_SCALE;
			} else {
				if ($nc($NimbusStyle::MINI_KEY)->equals(scaleKey)) {
					size *= $NimbusStyle::MINI_SCALE + 0.07;
				}
			}
		}
	}
	return size;
}

NimbusIcon::NimbusIcon() {
}

$Class* NimbusIcon::load$($String* name, bool initialize) {
	$loadClass(NimbusIcon, name, initialize, &_NimbusIcon_ClassInfo_, allocate$NimbusIcon);
	return class$;
}

$Class* NimbusIcon::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax