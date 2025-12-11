#include <javax/swing/plaf/basic/BasicTextUI$UpdateHandler.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/plaf/basic/BasicTextUI$BasicCaret.h>
#include <javax/swing/plaf/basic/BasicTextUI$RootView.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent$DropLocation.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef RIGHT_TO_LEFT
#undef TRUE
#undef USE_SELECTION

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $DropMode = ::javax::swing::DropMode;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $BasicTextUI$BasicCaret = ::javax::swing::plaf::basic::BasicTextUI$BasicCaret;
using $BasicTextUI$RootView = ::javax::swing::plaf::basic::BasicTextUI$RootView;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$DropLocation = ::javax::swing::text::JTextComponent$DropLocation;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTextUI$UpdateHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTextUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTextUI$UpdateHandler, this$0)},
	{"constraints", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/awt/Component;Ljava/lang/Object;>;", $PRIVATE, $field(BasicTextUI$UpdateHandler, constraints)},
	{"i18nView", "Z", nullptr, $PRIVATE, $field(BasicTextUI$UpdateHandler, i18nView)},
	{}
};

$MethodInfo _BasicTextUI$UpdateHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTextUI;)V", nullptr, 0, $method(static_cast<void(BasicTextUI$UpdateHandler::*)($BasicTextUI*)>(&BasicTextUI$UpdateHandler::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"calculateViewPosition", "(Ljava/awt/Shape;Ljavax/swing/text/View;)Ljava/awt/Shape;", nullptr, 0},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"dropIndexChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTextUI$UpdateHandler::*)()>(&BasicTextUI$UpdateHandler::dropIndexChanged))},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextUI$UpdateHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextUI$UpdateHandler", "javax.swing.plaf.basic.BasicTextUI", "UpdateHandler", 0},
	{}
};

$ClassInfo _BasicTextUI$UpdateHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextUI$UpdateHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener,javax.swing.event.DocumentListener,java.awt.LayoutManager2,javax.swing.plaf.UIResource",
	_BasicTextUI$UpdateHandler_FieldInfo_,
	_BasicTextUI$UpdateHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextUI$UpdateHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextUI"
};

$Object* allocate$BasicTextUI$UpdateHandler($Class* clazz) {
	return $of($alloc(BasicTextUI$UpdateHandler));
}

int32_t BasicTextUI$UpdateHandler::hashCode() {
	 return this->$PropertyChangeListener::hashCode();
}

bool BasicTextUI$UpdateHandler::equals(Object$* arg0) {
	 return this->$PropertyChangeListener::equals(arg0);
}

$Object* BasicTextUI$UpdateHandler::clone() {
	 return this->$PropertyChangeListener::clone();
}

$String* BasicTextUI$UpdateHandler::toString() {
	 return this->$PropertyChangeListener::toString();
}

void BasicTextUI$UpdateHandler::finalize() {
	this->$PropertyChangeListener::finalize();
}

void BasicTextUI$UpdateHandler::init$($BasicTextUI* this$0) {
	$set(this, this$0, this$0);
	this->i18nView = false;
}

void BasicTextUI$UpdateHandler::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($Object, oldValue, $nc(evt)->getOldValue());
	$var($Object, newValue, evt->getNewValue());
	$var($String, propertyName, evt->getPropertyName());
	if (($instanceOf($Document, oldValue)) || ($instanceOf($Document, newValue))) {
		if (oldValue != nullptr) {
			$nc(($cast($Document, oldValue)))->removeDocumentListener(this);
			this->i18nView = false;
		}
		if (newValue != nullptr) {
			$nc(($cast($Document, newValue)))->addDocumentListener(this);
			if ("document"_s == propertyName) {
				this->this$0->setView(nullptr);
				this->this$0->propertyChange(evt);
				this->this$0->modelChanged();
				return;
			}
		}
		this->this$0->modelChanged();
	}
	if ("focusAccelerator"_s == propertyName) {
		this->this$0->updateFocusAcceleratorBinding(true);
	} else if ("componentOrientation"_s == propertyName) {
		$var($Document, document, $nc(this->this$0->editor)->getDocument());
		$var($String, I18NProperty, "i18n"_s);
		$init($ComponentOrientation);
		$init($Boolean);
		if ($equals($ComponentOrientation::RIGHT_TO_LEFT, newValue) && !$nc($Boolean::TRUE)->equals($($nc(document)->getProperty(I18NProperty)))) {
			$nc(document)->putProperty(I18NProperty, $Boolean::TRUE);
		}
		this->this$0->modelChanged();
	} else if ("font"_s == propertyName) {
		this->this$0->modelChanged();
	} else if ("dropLocation"_s == propertyName) {
		dropIndexChanged();
	} else if ("editable"_s == propertyName) {
		this->this$0->updateCursor();
		this->this$0->modelChanged();
	}
	this->this$0->propertyChange(evt);
}

void BasicTextUI$UpdateHandler::dropIndexChanged() {
	$useLocalCurrentObjectStackCache();
	$init($DropMode);
	if ($nc(this->this$0->editor)->getDropMode() == $DropMode::USE_SELECTION) {
		return;
	}
	$var($JTextComponent$DropLocation, dropLocation, $nc(this->this$0->editor)->getDropLocation());
	if (dropLocation == nullptr) {
		if (this->this$0->dropCaret != nullptr) {
			$nc(this->this$0->dropCaret)->deinstall(this->this$0->editor);
			$nc(this->this$0->editor)->repaint(static_cast<$Rectangle*>(this->this$0->dropCaret));
			$set(this->this$0, dropCaret, nullptr);
		}
	} else {
		if (this->this$0->dropCaret == nullptr) {
			$set(this->this$0, dropCaret, $new($BasicTextUI$BasicCaret));
			$nc(this->this$0->dropCaret)->install(this->this$0->editor);
			$nc(this->this$0->dropCaret)->setVisible(true);
		}
		int32_t var$0 = $nc(dropLocation)->getIndex();
		$nc(this->this$0->dropCaret)->setDot(var$0, $(dropLocation->getBias()));
	}
}

void BasicTextUI$UpdateHandler::insertUpdate($DocumentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc(e)->getDocument());
	$var($Object, o, $nc(doc)->getProperty("i18n"_s));
	if ($instanceOf($Boolean, o)) {
		$var($Boolean, i18nFlag, $cast($Boolean, o));
		if ($nc(i18nFlag)->booleanValue() != this->i18nView) {
			this->i18nView = i18nFlag->booleanValue();
			this->this$0->modelChanged();
			return;
		}
	}
	$var($Rectangle, alloc, this->this$0->painted ? this->this$0->getVisibleEditorRect() : ($Rectangle*)nullptr);
	$nc(this->this$0->rootView)->insertUpdate(e, alloc, $($nc(this->this$0->rootView)->getViewFactory()));
}

void BasicTextUI$UpdateHandler::removeUpdate($DocumentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, alloc, this->this$0->painted ? this->this$0->getVisibleEditorRect() : ($Rectangle*)nullptr);
	$nc(this->this$0->rootView)->removeUpdate(e, alloc, $($nc(this->this$0->rootView)->getViewFactory()));
}

void BasicTextUI$UpdateHandler::changedUpdate($DocumentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, alloc, this->this$0->painted ? this->this$0->getVisibleEditorRect() : ($Rectangle*)nullptr);
	$nc(this->this$0->rootView)->changedUpdate(e, alloc, $($nc(this->this$0->rootView)->getViewFactory()));
}

void BasicTextUI$UpdateHandler::addLayoutComponent($String* name, $Component* comp) {
}

void BasicTextUI$UpdateHandler::removeLayoutComponent($Component* comp) {
	if (this->constraints != nullptr) {
		$nc(this->constraints)->remove(comp);
	}
}

$Dimension* BasicTextUI$UpdateHandler::preferredLayoutSize($Container* parent) {
	return nullptr;
}

$Dimension* BasicTextUI$UpdateHandler::minimumLayoutSize($Container* parent) {
	return nullptr;
}

void BasicTextUI$UpdateHandler::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	if ((this->constraints != nullptr) && (!$nc(this->constraints)->isEmpty())) {
		$var($Rectangle, alloc, this->this$0->getVisibleEditorRect());
		if (alloc != nullptr) {
			$var($Document, doc, $nc(this->this$0->editor)->getDocument());
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readLock();
			}
			{
				$var($Throwable, var$0, nullptr);
				try {
					$nc(this->this$0->rootView)->setSize((float)alloc->width, (float)alloc->height);
					$var($Enumeration, components, $nc(this->constraints)->keys());
					while ($nc(components)->hasMoreElements()) {
						$var($Component, comp, $cast($Component, components->nextElement()));
						$var($View, v, $cast($View, $nc(this->constraints)->get(comp)));
						$var($Shape, ca, calculateViewPosition(alloc, v));
						if (ca != nullptr) {
							$var($Rectangle, compAlloc, ($instanceOf($Rectangle, ca)) ? $cast($Rectangle, ca) : ca->getBounds());
							$nc(comp)->setBounds(compAlloc);
						}
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if ($instanceOf($AbstractDocument, doc)) {
						$nc(($cast($AbstractDocument, doc)))->readUnlock();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

$Shape* BasicTextUI$UpdateHandler::calculateViewPosition($Shape* alloc$renamed, $View* v) {
	$useLocalCurrentObjectStackCache();
	$var($Shape, alloc, alloc$renamed);
	int32_t pos = $nc(v)->getStartOffset();
	$var($View, child, nullptr);
	{
		$var($View, parent, this->this$0->rootView);
		for (; (parent != nullptr) && (parent != v); $assign(parent, child)) {
			$init($Position$Bias);
			int32_t index = $nc(parent)->getViewIndex(pos, $Position$Bias::Forward);
			$assign(alloc, parent->getChildAllocation(index, alloc));
			$assign(child, parent->getView(index));
		}
	}
	return (child != nullptr) ? alloc : ($Shape*)nullptr;
}

void BasicTextUI$UpdateHandler::addLayoutComponent($Component* comp, Object$* constraint) {
	if ($instanceOf($View, constraint)) {
		if (this->constraints == nullptr) {
			$set(this, constraints, $new($Hashtable, 7));
		}
		$nc(this->constraints)->put(comp, constraint);
	}
}

$Dimension* BasicTextUI$UpdateHandler::maximumLayoutSize($Container* target) {
	return nullptr;
}

float BasicTextUI$UpdateHandler::getLayoutAlignmentX($Container* target) {
	return 0.5f;
}

float BasicTextUI$UpdateHandler::getLayoutAlignmentY($Container* target) {
	return 0.5f;
}

void BasicTextUI$UpdateHandler::invalidateLayout($Container* target) {
}

BasicTextUI$UpdateHandler::BasicTextUI$UpdateHandler() {
}

$Class* BasicTextUI$UpdateHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTextUI$UpdateHandler, name, initialize, &_BasicTextUI$UpdateHandler_ClassInfo_, allocate$BasicTextUI$UpdateHandler);
	return class$;
}

$Class* BasicTextUI$UpdateHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax