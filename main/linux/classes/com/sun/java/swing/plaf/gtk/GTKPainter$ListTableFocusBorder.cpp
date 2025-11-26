#include <com/sun/java/swing/plaf/gtk/GTKPainter$ListTableFocusBorder.h>

#include <com/sun/java/swing/plaf/gtk/GTKPainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef ENABLED
#undef FOCUSED
#undef INSTANCE
#undef SELECTED
#undef TABLE

using $GTKPainter = ::com::sun::java::swing::plaf::gtk::GTKPainter;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKPainter$ListTableFocusBorder_FieldInfo_[] = {
	{"selectedCell", "Z", nullptr, $PRIVATE, $field(GTKPainter$ListTableFocusBorder, selectedCell)},
	{"focusedCell", "Z", nullptr, $PRIVATE, $field(GTKPainter$ListTableFocusBorder, focusedCell)},
	{}
};

$MethodInfo _GTKPainter$ListTableFocusBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(GTKPainter$ListTableFocusBorder::*)(bool,bool)>(&GTKPainter$ListTableFocusBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getContext", "(Ljava/awt/Component;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(GTKPainter$ListTableFocusBorder::*)($Component*)>(&GTKPainter$ListTableFocusBorder::getContext))},
	{"getNoFocusCellBorder", "()Lcom/sun/java/swing/plaf/gtk/GTKPainter$ListTableFocusBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKPainter$ListTableFocusBorder*(*)()>(&GTKPainter$ListTableFocusBorder::getNoFocusCellBorder))},
	{"getSelectedCellBorder", "()Lcom/sun/java/swing/plaf/gtk/GTKPainter$ListTableFocusBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKPainter$ListTableFocusBorder*(*)()>(&GTKPainter$ListTableFocusBorder::getSelectedCellBorder))},
	{"getUnselectedCellBorder", "()Lcom/sun/java/swing/plaf/gtk/GTKPainter$ListTableFocusBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKPainter$ListTableFocusBorder*(*)()>(&GTKPainter$ListTableFocusBorder::getUnselectedCellBorder))},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKPainter$ListTableFocusBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKPainter$ListTableFocusBorder", "com.sun.java.swing.plaf.gtk.GTKPainter", "ListTableFocusBorder", $STATIC},
	{}
};

$ClassInfo _GTKPainter$ListTableFocusBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKPainter$ListTableFocusBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_GTKPainter$ListTableFocusBorder_FieldInfo_,
	_GTKPainter$ListTableFocusBorder_MethodInfo_,
	nullptr,
	nullptr,
	_GTKPainter$ListTableFocusBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKPainter"
};

$Object* allocate$GTKPainter$ListTableFocusBorder($Class* clazz) {
	return $of($alloc(GTKPainter$ListTableFocusBorder));
}

int32_t GTKPainter$ListTableFocusBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool GTKPainter$ListTableFocusBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* GTKPainter$ListTableFocusBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* GTKPainter$ListTableFocusBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void GTKPainter$ListTableFocusBorder::finalize() {
	this->$AbstractBorder::finalize();
}

GTKPainter$ListTableFocusBorder* GTKPainter$ListTableFocusBorder::getSelectedCellBorder() {
	$init(GTKPainter$ListTableFocusBorder);
	return $new(GTKPainter$ListTableFocusBorder, true, true);
}

GTKPainter$ListTableFocusBorder* GTKPainter$ListTableFocusBorder::getUnselectedCellBorder() {
	$init(GTKPainter$ListTableFocusBorder);
	return $new(GTKPainter$ListTableFocusBorder, false, true);
}

GTKPainter$ListTableFocusBorder* GTKPainter$ListTableFocusBorder::getNoFocusCellBorder() {
	$init(GTKPainter$ListTableFocusBorder);
	return $new(GTKPainter$ListTableFocusBorder, false, false);
}

void GTKPainter$ListTableFocusBorder::init$(bool selectedCell, bool focusedCell) {
	$AbstractBorder::init$();
	this->selectedCell = selectedCell;
	this->focusedCell = focusedCell;
}

$SynthContext* GTKPainter$ListTableFocusBorder::getContext($Component* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, nullptr);
	$var($ComponentUI, ui, nullptr);
	if ($instanceOf($JLabel, c)) {
		$assign(ui, $nc(($cast($JLabel, c)))->getUI());
	}
	if ($instanceOf($SynthUI, ui)) {
		$assign(context, $nc(($cast($SynthUI, ui)))->getContext($cast($JComponent, c)));
	}
	return context;
}

void GTKPainter$ListTableFocusBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (this->focusedCell) {
		$var($SynthContext, context, getContext(c));
		int32_t state = (this->selectedCell ? $SynthConstants::SELECTED : $SynthConstants::FOCUSED | $SynthConstants::ENABLED);
		if (context != nullptr) {
			$init($GTKPainter);
			$init($Region);
			$nc($GTKPainter::INSTANCE)->paintFocus(context, g, $Region::TABLE, state, ""_s, x, y, w, h);
		}
	}
}

$Insets* GTKPainter$ListTableFocusBorder::getBorderInsets($Component* c, $Insets* i$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, i, i$renamed);
	$var($SynthContext, context, getContext(c));
	if (context != nullptr) {
		$assign(i, $nc($(context->getStyle()))->getInsets(context, i));
	}
	return i;
}

bool GTKPainter$ListTableFocusBorder::isBorderOpaque() {
	return true;
}

GTKPainter$ListTableFocusBorder::GTKPainter$ListTableFocusBorder() {
}

$Class* GTKPainter$ListTableFocusBorder::load$($String* name, bool initialize) {
	$loadClass(GTKPainter$ListTableFocusBorder, name, initialize, &_GTKPainter$ListTableFocusBorder_ClassInfo_, allocate$GTKPainter$ListTableFocusBorder);
	return class$;
}

$Class* GTKPainter$ListTableFocusBorder::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com