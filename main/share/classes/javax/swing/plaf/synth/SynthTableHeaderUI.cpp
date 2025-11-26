#include <javax/swing/plaf/synth/SynthTableHeaderUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TableHeaderUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthTableHeaderUI$HeaderRenderer.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>
#include <jcpp.h>

#undef ENABLED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableHeaderUI = ::javax::swing::plaf::TableHeaderUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthTableHeaderUI$HeaderRenderer = ::javax::swing::plaf::synth::SynthTableHeaderUI$HeaderRenderer;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $DefaultTableCellHeaderRenderer = ::sun::swing::table::DefaultTableCellHeaderRenderer;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTableHeaderUI_FieldInfo_[] = {
	{"prevRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(SynthTableHeaderUI, prevRenderer)},
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTableHeaderUI, style)},
	{}
};

$MethodInfo _SynthTableHeaderUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthTableHeaderUI::*)()>(&SynthTableHeaderUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthTableHeaderUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthTableHeaderUI*)>(&SynthTableHeaderUI::access$000))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthTableHeaderUI::createUI))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthTableHeaderUI::*)($JComponent*,int32_t)>(&SynthTableHeaderUI::getContext))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"rolloverColumnUpdated", "(II)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/table/JTableHeader;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTableHeaderUI::*)($JTableHeader*)>(&SynthTableHeaderUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthTableHeaderUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTableHeaderUI$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.swing.plaf.synth.SynthTableHeaderUI$HeaderRenderer", "javax.swing.plaf.synth.SynthTableHeaderUI", "HeaderRenderer", $PRIVATE},
	{}
};

$ClassInfo _SynthTableHeaderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthTableHeaderUI",
	"javax.swing.plaf.basic.BasicTableHeaderUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthTableHeaderUI_FieldInfo_,
	_SynthTableHeaderUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTableHeaderUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTableHeaderUI$1,javax.swing.plaf.synth.SynthTableHeaderUI$HeaderRenderer"
};

$Object* allocate$SynthTableHeaderUI($Class* clazz) {
	return $of($alloc(SynthTableHeaderUI));
}

int32_t SynthTableHeaderUI::hashCode() {
	 return this->$BasicTableHeaderUI::hashCode();
}

bool SynthTableHeaderUI::equals(Object$* arg0) {
	 return this->$BasicTableHeaderUI::equals(arg0);
}

$Object* SynthTableHeaderUI::clone() {
	 return this->$BasicTableHeaderUI::clone();
}

$String* SynthTableHeaderUI::toString() {
	 return this->$BasicTableHeaderUI::toString();
}

void SynthTableHeaderUI::finalize() {
	this->$BasicTableHeaderUI::finalize();
}

int32_t SynthTableHeaderUI::access$000(SynthTableHeaderUI* x0) {
	$init(SynthTableHeaderUI);
	return $nc(x0)->getRolloverColumn();
}

void SynthTableHeaderUI::init$() {
	$BasicTableHeaderUI::init$();
	$set(this, prevRenderer, nullptr);
}

$ComponentUI* SynthTableHeaderUI::createUI($JComponent* h) {
	$init(SynthTableHeaderUI);
	return $new(SynthTableHeaderUI);
}

void SynthTableHeaderUI::installDefaults() {
	$set(this, prevRenderer, $nc(this->header)->getDefaultRenderer());
	if ($instanceOf($UIResource, this->prevRenderer)) {
		$nc(this->header)->setDefaultRenderer($$new($SynthTableHeaderUI$HeaderRenderer, this));
	}
	updateStyle(this->header);
}

void SynthTableHeaderUI::updateStyle($JTableHeader* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
}

void SynthTableHeaderUI::installListeners() {
	$BasicTableHeaderUI::installListeners();
	$nc(this->header)->addPropertyChangeListener(this);
}

void SynthTableHeaderUI::uninstallDefaults() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SynthTableHeaderUI$HeaderRenderer, $($nc(this->header)->getDefaultRenderer()))) {
		$nc(this->header)->setDefaultRenderer(this->prevRenderer);
	}
	$var($SynthContext, context, getContext(this->header, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

void SynthTableHeaderUI::uninstallListeners() {
	$nc(this->header)->removePropertyChangeListener(this);
	$BasicTableHeaderUI::uninstallListeners();
}

void SynthTableHeaderUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintTableHeaderBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthTableHeaderUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthTableHeaderUI::paint($SynthContext* context, $Graphics* g) {
	$BasicTableHeaderUI::paint(g, $($nc(context)->getComponent()));
}

void SynthTableHeaderUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintTableHeaderBorder(context, g, x, y, w, h);
}

$SynthContext* SynthTableHeaderUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthTableHeaderUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

void SynthTableHeaderUI::rolloverColumnUpdated(int32_t oldColumn, int32_t newColumn) {
	$useLocalCurrentObjectStackCache();
	$nc(this->header)->repaint($($nc(this->header)->getHeaderRect(oldColumn)));
	$nc(this->header)->repaint($($nc(this->header)->getHeaderRect(newColumn)));
}

void SynthTableHeaderUI::propertyChange($PropertyChangeEvent* evt) {
	if ($SynthLookAndFeel::shouldUpdateStyle(evt)) {
		updateStyle($cast($JTableHeader, $($nc(evt)->getSource())));
	}
}

SynthTableHeaderUI::SynthTableHeaderUI() {
}

$Class* SynthTableHeaderUI::load$($String* name, bool initialize) {
	$loadClass(SynthTableHeaderUI, name, initialize, &_SynthTableHeaderUI_ClassInfo_, allocate$SynthTableHeaderUI);
	return class$;
}

$Class* SynthTableHeaderUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax