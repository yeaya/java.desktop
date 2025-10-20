#include <javax/swing/plaf/synth/SynthSeparatorUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JToolBar$Separator.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DimensionUIResource.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef ENABLED
#undef MAX_VALUE
#undef VERTICAL

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $JToolBar$Separator = ::javax::swing::JToolBar$Separator;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DimensionUIResource = ::javax::swing::plaf::DimensionUIResource;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthSeparatorUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthSeparatorUI, style)},
	{}
};

$MethodInfo _SynthSeparatorUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthSeparatorUI::*)()>(&SynthSeparatorUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthSeparatorUI::createUI))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthSeparatorUI::*)($JComponent*,int32_t)>(&SynthSeparatorUI::getContext))},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JSeparator;)V", nullptr, $PUBLIC},
	{"installListeners", "(Ljavax/swing/JSeparator;)V", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JSeparator;)V", nullptr, $PUBLIC},
	{"uninstallListeners", "(Ljavax/swing/JSeparator;)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JSeparator;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSeparatorUI::*)($JSeparator*)>(&SynthSeparatorUI::updateStyle))},
	{}
};

$ClassInfo _SynthSeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthSeparatorUI",
	"javax.swing.plaf.SeparatorUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthSeparatorUI_FieldInfo_,
	_SynthSeparatorUI_MethodInfo_
};

$Object* allocate$SynthSeparatorUI($Class* clazz) {
	return $of($alloc(SynthSeparatorUI));
}

int32_t SynthSeparatorUI::hashCode() {
	 return this->$SeparatorUI::hashCode();
}

bool SynthSeparatorUI::equals(Object$* arg0) {
	 return this->$SeparatorUI::equals(arg0);
}

$Object* SynthSeparatorUI::clone() {
	 return this->$SeparatorUI::clone();
}

$String* SynthSeparatorUI::toString() {
	 return this->$SeparatorUI::toString();
}

void SynthSeparatorUI::finalize() {
	this->$SeparatorUI::finalize();
}

void SynthSeparatorUI::init$() {
	$SeparatorUI::init$();
}

$ComponentUI* SynthSeparatorUI::createUI($JComponent* c) {
	$init(SynthSeparatorUI);
	return $new(SynthSeparatorUI);
}

void SynthSeparatorUI::installUI($JComponent* c) {
	installDefaults($cast($JSeparator, c));
	installListeners($cast($JSeparator, c));
}

void SynthSeparatorUI::uninstallUI($JComponent* c) {
	uninstallListeners($cast($JSeparator, c));
	uninstallDefaults($cast($JSeparator, c));
}

void SynthSeparatorUI::installDefaults($JSeparator* c) {
	updateStyle(c);
}

void SynthSeparatorUI::updateStyle($JSeparator* sep) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(sep, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		if ($instanceOf($JToolBar$Separator, sep)) {
			$var($Dimension, size, $nc(($cast($JToolBar$Separator, sep)))->getSeparatorSize());
			if (size == nullptr || $instanceOf($UIResource, size)) {
				$assign(size, $cast($DimensionUIResource, $nc(this->style)->get(context, "ToolBar.separatorSize"_s)));
				if (size == nullptr) {
					$assign(size, $new($DimensionUIResource, 10, 10));
				}
				($cast($JToolBar$Separator, sep))->setSeparatorSize(size);
			}
		}
	}
}

void SynthSeparatorUI::uninstallDefaults($JSeparator* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

void SynthSeparatorUI::installListeners($JSeparator* c) {
	$nc(c)->addPropertyChangeListener(this);
}

void SynthSeparatorUI::uninstallListeners($JSeparator* c) {
	$nc(c)->removePropertyChangeListener(this);
}

void SynthSeparatorUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$var($JSeparator, separator, $cast($JSeparator, $nc(context)->getComponent()));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	int32_t var$3 = c->getHeight();
	$nc($(context->getPainter()))->paintSeparatorBackground(var$0, var$1, 0, 0, var$2, var$3, $nc(separator)->getOrientation());
	paint(context, g);
}

void SynthSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthSeparatorUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JSeparator, separator, $cast($JSeparator, $nc(context)->getComponent()));
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(separator)->getWidth();
	int32_t var$3 = separator->getHeight();
	$nc($(context->getPainter()))->paintSeparatorForeground(var$0, var$1, 0, 0, var$2, var$3, separator->getOrientation());
}

void SynthSeparatorUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($JSeparator, separator, $cast($JSeparator, $nc(context)->getComponent()));
	$nc($(context->getPainter()))->paintSeparatorBorder(context, g, x, y, w, h, $nc(separator)->getOrientation());
}

$Dimension* SynthSeparatorUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	int32_t thickness = $nc(this->style)->getInt(context, "Separator.thickness"_s, 2);
	$var($Insets, insets, $nc(c)->getInsets());
	$var($Dimension, size, nullptr);
	if ($nc(($cast($JSeparator, c)))->getOrientation() == $JSeparator::VERTICAL) {
		$assign(size, $new($Dimension, $nc(insets)->left + insets->right + thickness, insets->top + insets->bottom));
	} else {
		$assign(size, $new($Dimension, $nc(insets)->left + insets->right, insets->top + insets->bottom + thickness));
	}
	return size;
}

$Dimension* SynthSeparatorUI::getMinimumSize($JComponent* c) {
	return getPreferredSize(c);
}

$Dimension* SynthSeparatorUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, $Short::MAX_VALUE, $Short::MAX_VALUE);
}

$SynthContext* SynthSeparatorUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthSeparatorUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

void SynthSeparatorUI::propertyChange($PropertyChangeEvent* evt) {
	if ($SynthLookAndFeel::shouldUpdateStyle(evt)) {
		updateStyle($cast($JSeparator, $($nc(evt)->getSource())));
	}
}

SynthSeparatorUI::SynthSeparatorUI() {
}

$Class* SynthSeparatorUI::load$($String* name, bool initialize) {
	$loadClass(SynthSeparatorUI, name, initialize, &_SynthSeparatorUI_ClassInfo_, allocate$SynthSeparatorUI);
	return class$;
}

$Class* SynthSeparatorUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax