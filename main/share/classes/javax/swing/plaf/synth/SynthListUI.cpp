#include <javax/swing/plaf/synth/SynthListUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/DefaultListCellRenderer$UIResource.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ListUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthListUI$SynthListCellRenderer.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef ENABLED
#undef SELECTED
#undef TEXT_BACKGROUND
#undef TEXT_FOREGROUND

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $DefaultListCellRenderer$UIResource = ::javax::swing::DefaultListCellRenderer$UIResource;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ListUI = ::javax::swing::plaf::ListUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthListUI$SynthListCellRenderer = ::javax::swing::plaf::synth::SynthListUI$SynthListCellRenderer;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthListUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthListUI, style)},
	{"useListColors", "Z", nullptr, $PRIVATE, $field(SynthListUI, useListColors)},
	{"useUIBorder", "Z", nullptr, $PRIVATE, $field(SynthListUI, useUIBorder)},
	{}
};

$MethodInfo _SynthListUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthListUI::*)()>(&SynthListUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthListUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthListUI::*)($JComponent*)>(&SynthListUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthListUI::*)($JComponent*,int32_t)>(&SynthListUI::getContext))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthListUI::*)($JComponent*)>(&SynthListUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthListUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthListUI$SynthListCellRenderer", "javax.swing.plaf.synth.SynthListUI", "SynthListCellRenderer", $PRIVATE},
	{}
};

$ClassInfo _SynthListUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthListUI",
	"javax.swing.plaf.basic.BasicListUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthListUI_FieldInfo_,
	_SynthListUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthListUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthListUI$SynthListCellRenderer"
};

$Object* allocate$SynthListUI($Class* clazz) {
	return $of($alloc(SynthListUI));
}

int32_t SynthListUI::hashCode() {
	 return this->$BasicListUI::hashCode();
}

bool SynthListUI::equals(Object$* arg0) {
	 return this->$BasicListUI::equals(arg0);
}

$Object* SynthListUI::clone() {
	 return this->$BasicListUI::clone();
}

$String* SynthListUI::toString() {
	 return this->$BasicListUI::toString();
}

void SynthListUI::finalize() {
	this->$BasicListUI::finalize();
}

void SynthListUI::init$() {
	$BasicListUI::init$();
}

$ComponentUI* SynthListUI::createUI($JComponent* list) {
	$init(SynthListUI);
	return $new(SynthListUI);
}

void SynthListUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintListBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(g, c);
}

void SynthListUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintListBorder(context, g, x, y, w, h);
}

void SynthListUI::installListeners() {
	$BasicListUI::installListeners();
	$nc(this->list)->addPropertyChangeListener(this);
}

void SynthListUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JList, $($nc(e)->getSource())));
	}
}

void SynthListUI::uninstallListeners() {
	$BasicListUI::uninstallListeners();
	$nc(this->list)->removePropertyChangeListener(this);
}

void SynthListUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->list)->getCellRenderer() == nullptr;
	if (var$0 || ($instanceOf($UIResource, $($nc(this->list)->getCellRenderer())))) {
		$nc(this->list)->setCellRenderer($$new($SynthListUI$SynthListCellRenderer, this));
	}
	updateStyle(this->list);
}

void SynthListUI::updateStyle($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(this->list, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		$nc(context)->setComponentState($SynthConstants::SELECTED);
		$var($Color, sbg, $nc(this->list)->getSelectionBackground());
		if (sbg == nullptr || $instanceOf($UIResource, sbg)) {
			$init($ColorType);
			$nc(this->list)->setSelectionBackground($($nc(this->style)->getColor(context, $ColorType::TEXT_BACKGROUND)));
		}
		$var($Color, sfg, $nc(this->list)->getSelectionForeground());
		if (sfg == nullptr || $instanceOf($UIResource, sfg)) {
			$init($ColorType);
			$nc(this->list)->setSelectionForeground($($nc(this->style)->getColor(context, $ColorType::TEXT_FOREGROUND)));
		}
		this->useListColors = $nc(this->style)->getBoolean(context, "List.rendererUseListColors"_s, true);
		this->useUIBorder = $nc(this->style)->getBoolean(context, "List.rendererUseUIBorder"_s, true);
		int32_t height = $nc(this->style)->getInt(context, "List.cellHeight"_s, -1);
		if (height != -1) {
			$nc(this->list)->setFixedCellHeight(height);
		}
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
}

void SynthListUI::uninstallDefaults() {
	$BasicListUI::uninstallDefaults();
	$var($SynthContext, context, getContext(this->list, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

$SynthContext* SynthListUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthListUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthListUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

SynthListUI::SynthListUI() {
}

$Class* SynthListUI::load$($String* name, bool initialize) {
	$loadClass(SynthListUI, name, initialize, &_SynthListUI_ClassInfo_, allocate$SynthListUI);
	return class$;
}

$Class* SynthListUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax