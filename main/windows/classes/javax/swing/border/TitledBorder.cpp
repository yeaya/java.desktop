#include <javax/swing/border/TitledBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jcpp.h>

#undef ABOVE_BOTTOM
#undef ABOVE_TOP
#undef BELOW_BOTTOM
#undef BELOW_TOP
#undef BOTTOM
#undef CENTER
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT
#undef DEFAULT_JUSTIFICATION
#undef DEFAULT_POSITION
#undef DIALOG
#undef EDGE_SPACING
#undef LEADING
#undef LEFT
#undef OTHER
#undef PLAIN
#undef RIGHT
#undef TEXT_INSET_H
#undef TEXT_SPACING
#undef TOP
#undef TRAILING

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace javax {
	namespace swing {
		namespace border {

class TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0 : public $PropertyChangeListener {
	$class(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$($WeakReference* weakReference) {
		$set(this, weakReference, weakReference);
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		TitledBorder::lambda$installPropertyChangeListeners$0(weakReference, evt);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0>());
	}
	$WeakReference* weakReference = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::fieldInfos[2] = {
	{"weakReference", "Ljava/lang/ref/WeakReference;", nullptr, $PUBLIC, $field(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0, weakReference)},
	{}
};
$MethodInfo TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/ref/WeakReference;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::*)($WeakReference*)>(&TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.border.TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	fieldInfos,
	methodInfos
};
$Class* TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::load$($String* name, bool initialize) {
	$loadClass(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::class$ = nullptr;

class TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1 : public $Runnable {
	$class(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($PropertyChangeListener* listener) {
		$set(this, listener, listener);
	}
	virtual void run() override {
		TitledBorder::lambda$installPropertyChangeListeners$1(listener);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1>());
	}
	$PropertyChangeListener* listener = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::fieldInfos[2] = {
	{"listener", "Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC, $field(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1, listener)},
	{}
};
$MethodInfo TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::*)($PropertyChangeListener*)>(&TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.border.TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::load$($String* name, bool initialize) {
	$loadClass(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::class$ = nullptr;

$Attribute TitledBorder_Attribute_var$1[] = {
	{'s', "border"},
	{'s', "title"},
	{'s', "titleJustification"},
	{'s', "titlePosition"},
	{'s', "titleFont"},
	{'s', "titleColor"},
	{'-'}
};

$NamedAttribute TitledBorder_Attribute_var$0[] = {
	{"value", '[', TitledBorder_Attribute_var$1},
	{}
};

$CompoundAttribute _TitledBorder_MethodAnnotations_init$5[] = {
	{"Ljava/beans/ConstructorProperties;", TitledBorder_Attribute_var$0},
	{}
};

$FieldInfo _TitledBorder_FieldInfo_[] = {
	{"title", "Ljava/lang/String;", nullptr, $PROTECTED, $field(TitledBorder, title)},
	{"border", "Ljavax/swing/border/Border;", nullptr, $PROTECTED, $field(TitledBorder, border)},
	{"titlePosition", "I", nullptr, $PROTECTED, $field(TitledBorder, titlePosition)},
	{"titleJustification", "I", nullptr, $PROTECTED, $field(TitledBorder, titleJustification)},
	{"titleFont", "Ljava/awt/Font;", nullptr, $PROTECTED, $field(TitledBorder, titleFont)},
	{"titleColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(TitledBorder, titleColor)},
	{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $FINAL, $field(TitledBorder, label)},
	{"DEFAULT_POSITION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, DEFAULT_POSITION)},
	{"ABOVE_TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, ABOVE_TOP)},
	{"TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, TOP)},
	{"BELOW_TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, BELOW_TOP)},
	{"ABOVE_BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, ABOVE_BOTTOM)},
	{"BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, BOTTOM)},
	{"BELOW_BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, BELOW_BOTTOM)},
	{"DEFAULT_JUSTIFICATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, DEFAULT_JUSTIFICATION)},
	{"LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, LEFT)},
	{"CENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, CENTER)},
	{"RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, RIGHT)},
	{"LEADING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, LEADING)},
	{"TRAILING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, TRAILING)},
	{"EDGE_SPACING", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TitledBorder, EDGE_SPACING)},
	{"TEXT_SPACING", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TitledBorder, TEXT_SPACING)},
	{"TEXT_INSET_H", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TitledBorder, TEXT_INSET_H)},
	{}
};

$MethodInfo _TitledBorder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorder::*)($String*)>(&TitledBorder::init$))},
	{"<init>", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorder::*)($Border*)>(&TitledBorder::init$))},
	{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorder::*)($Border*,$String*)>(&TitledBorder::init$))},
	{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorder::*)($Border*,$String*,int32_t,int32_t)>(&TitledBorder::init$))},
	{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;IILjava/awt/Font;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorder::*)($Border*,$String*,int32_t,int32_t,$Font*)>(&TitledBorder::init$))},
	{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;IILjava/awt/Font;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorder::*)($Border*,$String*,int32_t,int32_t,$Font*,$Color*)>(&TitledBorder::init$)), nullptr, nullptr, _TitledBorder_MethodAnnotations_init$5},
	{"getBaseline", "(Ljava/awt/Component;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljava/awt/Component;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getBorderInsets", "(Ljavax/swing/border/Border;Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Insets*(*)($Border*,$Component*,$Insets*)>(&TitledBorder::getBorderInsets))},
	{"getColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(TitledBorder::*)($Component*)>(&TitledBorder::getColor))},
	{"getFont", "(Ljava/awt/Component;)Ljava/awt/Font;", nullptr, $PROTECTED},
	{"getJustification", "(Ljava/awt/Component;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TitledBorder::*)($Component*)>(&TitledBorder::getJustification))},
	{"getLabel", "(Ljava/awt/Component;)Ljavax/swing/JLabel;", nullptr, $PRIVATE, $method(static_cast<$JLabel*(TitledBorder::*)($Component*)>(&TitledBorder::getLabel))},
	{"getMinimumSize", "(Ljava/awt/Component;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPosition", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(TitledBorder::*)()>(&TitledBorder::getPosition))},
	{"getTitle", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTitleColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getTitleFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getTitleJustification", "()I", nullptr, $PUBLIC},
	{"getTitlePosition", "()I", nullptr, $PUBLIC},
	{"installPropertyChangeListeners", "()V", nullptr, $PRIVATE, $method(static_cast<void(TitledBorder::*)()>(&TitledBorder::installPropertyChangeListeners))},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"lambda$installPropertyChangeListeners$0", "(Ljava/lang/ref/WeakReference;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($WeakReference*,$PropertyChangeEvent*)>(&TitledBorder::lambda$installPropertyChangeListeners$0))},
	{"lambda$installPropertyChangeListeners$1", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($PropertyChangeListener*)>(&TitledBorder::lambda$installPropertyChangeListeners$1))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTitleColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setTitleFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setTitleJustification", "(I)V", nullptr, $PUBLIC},
	{"setTitlePosition", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TitledBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.border.TitledBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_TitledBorder_FieldInfo_,
	_TitledBorder_MethodInfo_
};

$Object* allocate$TitledBorder($Class* clazz) {
	return $of($alloc(TitledBorder));
}

void TitledBorder::init$($String* title) {
	TitledBorder::init$(nullptr, title, TitledBorder::LEADING, TitledBorder::DEFAULT_POSITION, nullptr, nullptr);
}

void TitledBorder::init$($Border* border) {
	TitledBorder::init$(border, ""_s, TitledBorder::LEADING, TitledBorder::DEFAULT_POSITION, nullptr, nullptr);
}

void TitledBorder::init$($Border* border, $String* title) {
	TitledBorder::init$(border, title, TitledBorder::LEADING, TitledBorder::DEFAULT_POSITION, nullptr, nullptr);
}

void TitledBorder::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition) {
	TitledBorder::init$(border, title, titleJustification, titlePosition, nullptr, nullptr);
}

void TitledBorder::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, $Font* titleFont) {
	TitledBorder::init$(border, title, titleJustification, titlePosition, titleFont, nullptr);
}

void TitledBorder::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, $Font* titleFont, $Color* titleColor) {
	$AbstractBorder::init$();
	$set(this, title, title);
	$set(this, border, border);
	$set(this, titleFont, titleFont);
	$set(this, titleColor, titleColor);
	setTitleJustification(titleJustification);
	setTitlePosition(titlePosition);
	$set(this, label, $new($JLabel));
	$nc(this->label)->setOpaque(false);
	$init($BasicHTML);
	$nc(this->label)->putClientProperty($BasicHTML::propertyKey, nullptr);
	installPropertyChangeListeners();
}

void TitledBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($Border, border, getBorder());
	$var($String, title, getTitle());
	if ((title != nullptr) && !title->isEmpty()) {
		int32_t edge = ($instanceOf(TitledBorder, border)) ? 0 : TitledBorder::EDGE_SPACING;
		$var($JLabel, label, getLabel(c));
		$var($Dimension, size, $nc(label)->getPreferredSize());
		$var($Insets, insets, getBorderInsets(border, c, $$new($Insets, 0, 0, 0, 0)));
		int32_t borderX = x + edge;
		int32_t borderY = y + edge;
		int32_t borderW = width - edge - edge;
		int32_t borderH = height - edge - edge;
		int32_t labelY = y;
		int32_t labelH = $nc(size)->height;
		int32_t position = getPosition();
		switch (position) {
		case TitledBorder::ABOVE_TOP:
			{
				$nc(insets)->left = 0;
				$nc(insets)->right = 0;
				borderY += labelH - edge;
				borderH -= labelH - edge;
				break;
			}
		case TitledBorder::TOP:
			{
				$nc(insets)->top = edge + insets->top / 2 - labelH / 2;
				if ($nc(insets)->top < edge) {
					borderY -= insets->top;
					borderH += insets->top;
				} else {
					labelY += insets->top;
				}
				break;
			}
		case TitledBorder::BELOW_TOP:
			{
				labelY += $nc(insets)->top + edge;
				break;
			}
		case TitledBorder::ABOVE_BOTTOM:
			{
				labelY += height - labelH - $nc(insets)->bottom - edge;
				break;
			}
		case TitledBorder::BOTTOM:
			{
				labelY += height - labelH;
				$nc(insets)->bottom = edge + (insets->bottom - labelH) / 2;
				if ($nc(insets)->bottom < edge) {
					borderH += insets->bottom;
				} else {
					labelY -= insets->bottom;
				}
				break;
			}
		case TitledBorder::BELOW_BOTTOM:
			{
				$nc(insets)->left = 0;
				$nc(insets)->right = 0;
				labelY += height - labelH;
				borderH -= labelH - edge;
				break;
			}
		}
		$nc(insets)->left += edge + TitledBorder::TEXT_INSET_H;
		insets->right += edge + TitledBorder::TEXT_INSET_H;
		int32_t labelX = x;
		int32_t labelW = width - insets->left - insets->right;
		if (labelW > size->width) {
			labelW = size->width;
		}
		switch (getJustification(c)) {
		case TitledBorder::LEFT:
			{
				labelX += insets->left;
				break;
			}
		case TitledBorder::RIGHT:
			{
				labelX += width - insets->right - labelW;
				break;
			}
		case TitledBorder::CENTER:
			{
				labelX += (width - labelW) / 2;
				break;
			}
		}
		if (border != nullptr) {
			if ((position != TitledBorder::TOP) && (position != TitledBorder::BOTTOM)) {
				border->paintBorder(c, g, borderX, borderY, borderW, borderH);
			} else {
				$var($Graphics, g2, $nc(g)->create());
				if ($instanceOf($Graphics2D, g2)) {
					$var($Graphics2D, g2d, $cast($Graphics2D, g2));
					$var($Path2D, path, $new($Path2D$Float));
					path->append(static_cast<$Shape*>($$new($Rectangle, borderX, borderY, borderW, labelY - borderY)), false);
					path->append(static_cast<$Shape*>($$new($Rectangle, borderX, labelY, labelX - borderX - TitledBorder::TEXT_SPACING, labelH)), false);
					path->append(static_cast<$Shape*>($$new($Rectangle, labelX + labelW + TitledBorder::TEXT_SPACING, labelY, borderX - labelX + borderW - labelW - TitledBorder::TEXT_SPACING, labelH)), false);
					path->append(static_cast<$Shape*>($$new($Rectangle, borderX, labelY + labelH, borderW, borderY - labelY + borderH - labelH)), false);
					$nc(g2d)->clip(path);
				}
				border->paintBorder(c, g2, borderX, borderY, borderW, borderH);
				$nc(g2)->dispose();
			}
		}
		$nc(g)->translate(labelX, labelY);
		label->setSize(labelW, labelH);
		label->paint(g);
		g->translate(-labelX, -labelY);
	} else if (border != nullptr) {
		border->paintBorder(c, g, x, y, width, height);
	}
}

$Insets* TitledBorder::getBorderInsets($Component* c, $Insets* insets$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, insets$renamed);
	$var($Border, border, getBorder());
	$assign(insets, getBorderInsets(border, c, insets));
	$var($String, title, getTitle());
	if ((title != nullptr) && !title->isEmpty()) {
		int32_t edge = ($instanceOf(TitledBorder, border)) ? 0 : TitledBorder::EDGE_SPACING;
		$var($JLabel, label, getLabel(c));
		$var($Dimension, size, $nc(label)->getPreferredSize());
		switch (getPosition()) {
		case TitledBorder::ABOVE_TOP:
			{
				$nc(insets)->top += $nc(size)->height - edge;
				break;
			}
		case TitledBorder::TOP:
			{
				{
					if ($nc(insets)->top < $nc(size)->height) {
						insets->top = size->height - edge;
					}
					break;
				}
			}
		case TitledBorder::BELOW_TOP:
			{
				$nc(insets)->top += $nc(size)->height;
				break;
			}
		case TitledBorder::ABOVE_BOTTOM:
			{
				$nc(insets)->bottom += $nc(size)->height;
				break;
			}
		case TitledBorder::BOTTOM:
			{
				{
					if ($nc(insets)->bottom < $nc(size)->height) {
						insets->bottom = size->height - edge;
					}
					break;
				}
			}
		case TitledBorder::BELOW_BOTTOM:
			{
				$nc(insets)->bottom += $nc(size)->height - edge;
				break;
			}
		}
		$nc(insets)->top += edge + TitledBorder::TEXT_SPACING;
		insets->left += edge + TitledBorder::TEXT_SPACING;
		insets->right += edge + TitledBorder::TEXT_SPACING;
		insets->bottom += edge + TitledBorder::TEXT_SPACING;
	}
	return insets;
}

bool TitledBorder::isBorderOpaque() {
	return false;
}

$String* TitledBorder::getTitle() {
	return this->title;
}

$Border* TitledBorder::getBorder() {
	return this->border != nullptr ? this->border : $UIManager::getBorder("TitledBorder.border"_s);
}

int32_t TitledBorder::getTitlePosition() {
	return this->titlePosition;
}

int32_t TitledBorder::getTitleJustification() {
	return this->titleJustification;
}

$Font* TitledBorder::getTitleFont() {
	return this->titleFont == nullptr ? $UIManager::getFont("TitledBorder.font"_s) : this->titleFont;
}

$Color* TitledBorder::getTitleColor() {
	return this->titleColor == nullptr ? $UIManager::getColor("TitledBorder.titleColor"_s) : this->titleColor;
}

void TitledBorder::setTitle($String* title) {
	$set(this, title, title);
}

void TitledBorder::setBorder($Border* border) {
	$set(this, border, border);
}

void TitledBorder::setTitlePosition(int32_t titlePosition) {
	$useLocalCurrentObjectStackCache();
	switch (titlePosition) {
	case TitledBorder::ABOVE_TOP:
		{}
	case TitledBorder::TOP:
		{}
	case TitledBorder::BELOW_TOP:
		{}
	case TitledBorder::ABOVE_BOTTOM:
		{}
	case TitledBorder::BOTTOM:
		{}
	case TitledBorder::BELOW_BOTTOM:
		{}
	case TitledBorder::DEFAULT_POSITION:
		{
			this->titlePosition = titlePosition;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({$$str(titlePosition), " is not a valid title position."_s}));
		}
	}
}

void TitledBorder::setTitleJustification(int32_t titleJustification) {
	$useLocalCurrentObjectStackCache();
	switch (titleJustification) {
	case TitledBorder::DEFAULT_JUSTIFICATION:
		{}
	case TitledBorder::LEFT:
		{}
	case TitledBorder::CENTER:
		{}
	case TitledBorder::RIGHT:
		{}
	case TitledBorder::LEADING:
		{}
	case TitledBorder::TRAILING:
		{
			this->titleJustification = titleJustification;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({$$str(titleJustification), " is not a valid title justification."_s}));
		}
	}
}

void TitledBorder::setTitleFont($Font* titleFont) {
	$set(this, titleFont, titleFont);
}

void TitledBorder::setTitleColor($Color* titleColor) {
	$set(this, titleColor, titleColor);
}

$Dimension* TitledBorder::getMinimumSize($Component* c) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, getBorderInsets(c));
	$var($Dimension, minSize, $new($Dimension, $nc(insets)->right + insets->left, insets->top + insets->bottom));
	$var($String, title, getTitle());
	if ((title != nullptr) && !title->isEmpty()) {
		$var($JLabel, label, getLabel(c));
		$var($Dimension, size, $nc(label)->getPreferredSize());
		int32_t position = getPosition();
		if ((position != TitledBorder::ABOVE_TOP) && (position != TitledBorder::BELOW_BOTTOM)) {
			minSize->width += $nc(size)->width;
		} else if (minSize->width < $nc(size)->width) {
			minSize->width += size->width;
		}
	}
	return minSize;
}

int32_t TitledBorder::getBaseline($Component* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		$throwNew($NullPointerException, "Must supply non-null component"_s);
	}
	if (width < 0) {
		$throwNew($IllegalArgumentException, "Width must be >= 0"_s);
	}
	if (height < 0) {
		$throwNew($IllegalArgumentException, "Height must be >= 0"_s);
	}
	$var($Border, border, getBorder());
	$var($String, title, getTitle());
	if ((title != nullptr) && !title->isEmpty()) {
		int32_t edge = ($instanceOf(TitledBorder, border)) ? 0 : TitledBorder::EDGE_SPACING;
		$var($JLabel, label, getLabel(c));
		$var($Dimension, size, $nc(label)->getPreferredSize());
		$var($Insets, insets, getBorderInsets(border, c, $$new($Insets, 0, 0, 0, 0)));
		int32_t baseline = label->getBaseline($nc(size)->width, size->height);
		switch (getPosition()) {
		case TitledBorder::ABOVE_TOP:
			{
				return baseline;
			}
		case TitledBorder::TOP:
			{
				$nc(insets)->top = edge + (insets->top - $nc(size)->height) / 2;
				return ($nc(insets)->top < edge) ? baseline : baseline + $nc(insets)->top;
			}
		case TitledBorder::BELOW_TOP:
			{
				return baseline + $nc(insets)->top + edge;
			}
		case TitledBorder::ABOVE_BOTTOM:
			{
				return baseline + height - $nc(size)->height - $nc(insets)->bottom - edge;
			}
		case TitledBorder::BOTTOM:
			{
				$nc(insets)->bottom = edge + (insets->bottom - $nc(size)->height) / 2;
				return ($nc(insets)->bottom < edge) ? baseline + height - $nc(size)->height : baseline + height - size->height + $nc(insets)->bottom;
			}
		case TitledBorder::BELOW_BOTTOM:
			{
				return baseline + height - $nc(size)->height;
			}
		}
	}
	return -1;
}

$Component$BaselineResizeBehavior* TitledBorder::getBaselineResizeBehavior($Component* c) {
	$AbstractBorder::getBaselineResizeBehavior(c);
	switch (getPosition()) {
	case TitledBorder::ABOVE_TOP:
		{}
	case TitledBorder::TOP:
		{}
	case TitledBorder::BELOW_TOP:
		{
			$init($Component$BaselineResizeBehavior);
			return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
		}
	case TitledBorder::ABOVE_BOTTOM:
		{}
	case TitledBorder::BOTTOM:
		{}
	case TitledBorder::BELOW_BOTTOM:
		{
			$init($Component$BaselineResizeBehavior);
			return $Component$BaselineResizeBehavior::CONSTANT_DESCENT;
		}
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

int32_t TitledBorder::getPosition() {
	$useLocalCurrentObjectStackCache();
	int32_t position = getTitlePosition();
	if (position != TitledBorder::DEFAULT_POSITION) {
		return position;
	}
	$var($Object, value, $UIManager::get("TitledBorder.position"_s));
	if ($instanceOf($Integer, value)) {
		int32_t i = $nc(($cast($Integer, value)))->intValue();
		if ((0 < i) && (i <= 6)) {
			return i;
		}
	} else if ($instanceOf($String, value)) {
		$var($String, s, $cast($String, value));
		if ($nc(s)->equalsIgnoreCase("ABOVE_TOP"_s)) {
			return TitledBorder::ABOVE_TOP;
		}
		if ($nc(s)->equalsIgnoreCase("TOP"_s)) {
			return TitledBorder::TOP;
		}
		if ($nc(s)->equalsIgnoreCase("BELOW_TOP"_s)) {
			return TitledBorder::BELOW_TOP;
		}
		if ($nc(s)->equalsIgnoreCase("ABOVE_BOTTOM"_s)) {
			return TitledBorder::ABOVE_BOTTOM;
		}
		if ($nc(s)->equalsIgnoreCase("BOTTOM"_s)) {
			return TitledBorder::BOTTOM;
		}
		if ($nc(s)->equalsIgnoreCase("BELOW_BOTTOM"_s)) {
			return TitledBorder::BELOW_BOTTOM;
		}
	}
	return TitledBorder::TOP;
}

int32_t TitledBorder::getJustification($Component* c) {
	$useLocalCurrentObjectStackCache();
	int32_t justification = getTitleJustification();
	if ((justification == TitledBorder::LEADING) || (justification == TitledBorder::DEFAULT_JUSTIFICATION)) {
		return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight() ? TitledBorder::LEFT : TitledBorder::RIGHT;
	}
	if (justification == TitledBorder::TRAILING) {
		return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight() ? TitledBorder::RIGHT : TitledBorder::LEFT;
	}
	return justification;
}

$Font* TitledBorder::getFont($Component* c) {
	$var($Font, font, getTitleFont());
	if (font != nullptr) {
		return font;
	}
	if (c != nullptr) {
		$assign(font, c->getFont());
		if (font != nullptr) {
			return font;
		}
	}
	$init($Font);
	return $new($Font, $Font::DIALOG, $Font::PLAIN, 12);
}

$Color* TitledBorder::getColor($Component* c) {
	$var($Color, color, getTitleColor());
	if (color != nullptr) {
		return color;
	}
	return (c != nullptr) ? $nc(c)->getForeground() : ($Color*)nullptr;
}

$JLabel* TitledBorder::getLabel($Component* c) {
	$useLocalCurrentObjectStackCache();
	$nc(this->label)->setText($(getTitle()));
	$nc(this->label)->setFont($(getFont(c)));
	$nc(this->label)->setForeground($(getColor(c)));
	$nc(this->label)->setComponentOrientation($($nc(c)->getComponentOrientation()));
	$nc(this->label)->setEnabled($nc(c)->isEnabled());
	return this->label;
}

$Insets* TitledBorder::getBorderInsets($Border* border, $Component* c, $Insets* insets$renamed) {
	$init(TitledBorder);
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, insets$renamed);
	if (border == nullptr) {
		$nc(insets)->set(0, 0, 0, 0);
	} else if ($instanceOf($AbstractBorder, border)) {
		$var($AbstractBorder, ab, $cast($AbstractBorder, border));
		$assign(insets, $nc(ab)->getBorderInsets(c, insets));
	} else {
		$var($Insets, i, $nc(border)->getBorderInsets(c));
		$nc(insets)->set($nc(i)->top, i->left, i->bottom, i->right);
	}
	return insets;
}

void TitledBorder::installPropertyChangeListeners() {
	$useLocalCurrentObjectStackCache();
	$var($WeakReference, weakReference, $new($WeakReference, this));
	$var($PropertyChangeListener, listener, static_cast<$PropertyChangeListener*>($new(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0, weakReference)));
	$UIManager::addPropertyChangeListener(listener);
	$nc($($UIManager::getDefaults()))->addPropertyChangeListener(listener);
	$nc($($CleanerFactory::cleaner()))->register$(this, static_cast<$Runnable*>($$new(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1, listener)));
}

void TitledBorder::lambda$installPropertyChangeListeners$1($PropertyChangeListener* listener) {
	$init(TitledBorder);
	$UIManager::removePropertyChangeListener(listener);
	$nc($($UIManager::getDefaults()))->removePropertyChangeListener(listener);
}

void TitledBorder::lambda$installPropertyChangeListeners$0($WeakReference* weakReference, $PropertyChangeEvent* evt) {
	$init(TitledBorder);
	$useLocalCurrentObjectStackCache();
	$var(TitledBorder, tb, $cast(TitledBorder, $nc(weakReference)->get()));
	$var($String, prop, $nc(evt)->getPropertyName());
	bool var$0 = tb != nullptr;
	if (var$0) {
		bool var$1 = "lookAndFeel"_s->equals(prop);
		var$0 = (var$1 || "LabelUI"_s->equals(prop));
	}
	if (var$0) {
		$nc($nc(tb)->label)->updateUI();
	}
}

TitledBorder::TitledBorder() {
}

$Class* TitledBorder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::classInfo$.name)) {
			return TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::load$(name, initialize);
		}
		if (name->equals(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::classInfo$.name)) {
			return TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::load$(name, initialize);
		}
	}
	$loadClass(TitledBorder, name, initialize, &_TitledBorder_ClassInfo_, allocate$TitledBorder);
	return class$;
}

$Class* TitledBorder::class$ = nullptr;

		} // border
	} // swing
} // javax