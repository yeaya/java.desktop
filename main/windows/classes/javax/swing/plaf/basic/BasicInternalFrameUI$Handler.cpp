#include <javax/swing/plaf/basic/BasicInternalFrameUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/event/InternalFrameEvent.h>
#include <javax/swing/event/InternalFrameListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

#undef FALSE
#undef IS_CLOSED_PROPERTY
#undef IS_ICON_PROPERTY
#undef IS_MAXIMUM_PROPERTY
#undef IS_SELECTED_PROPERTY
#undef TITLE_PROPERTY
#undef TRUE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowFocusListener = ::java::awt::event::WindowFocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $InternalFrameEvent = ::javax::swing::event::InternalFrameEvent;
using $InternalFrameListener = ::javax::swing::event::InternalFrameListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicInternalFrameUI$Handler::*)($BasicInternalFrameUI*)>(&BasicInternalFrameUI$Handler::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"internalFrameActivated", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC},
	{"internalFrameClosed", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC},
	{"internalFrameClosing", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC},
	{"internalFrameDeactivated", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC},
	{"internalFrameDeiconified", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC},
	{"internalFrameIconified", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC},
	{"internalFrameOpened", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"windowGainedFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowLostFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameUI$Handler", "javax.swing.plaf.basic.BasicInternalFrameUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicInternalFrameUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameUI$Handler",
	"java.lang.Object",
	"java.awt.event.ComponentListener,javax.swing.event.InternalFrameListener,java.awt.LayoutManager,javax.swing.event.MouseInputListener,java.beans.PropertyChangeListener,java.awt.event.WindowFocusListener,javax.swing.SwingConstants",
	_BasicInternalFrameUI$Handler_FieldInfo_,
	_BasicInternalFrameUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameUI"
};

$Object* allocate$BasicInternalFrameUI$Handler($Class* clazz) {
	return $of($alloc(BasicInternalFrameUI$Handler));
}

int32_t BasicInternalFrameUI$Handler::hashCode() {
	 return this->$ComponentListener::hashCode();
}

bool BasicInternalFrameUI$Handler::equals(Object$* arg0) {
	 return this->$ComponentListener::equals(arg0);
}

$Object* BasicInternalFrameUI$Handler::clone() {
	 return this->$ComponentListener::clone();
}

$String* BasicInternalFrameUI$Handler::toString() {
	 return this->$ComponentListener::toString();
}

void BasicInternalFrameUI$Handler::finalize() {
	this->$ComponentListener::finalize();
}

void BasicInternalFrameUI$Handler::init$($BasicInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameUI$Handler::windowGainedFocus($WindowEvent* e) {
}

void BasicInternalFrameUI$Handler::windowLostFocus($WindowEvent* e) {
	this->this$0->cancelResize();
}

void BasicInternalFrameUI$Handler::componentResized($ComponentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, parentNewBounds, $nc(($cast($Component, $($nc(e)->getSource()))))->getBounds());
	$var($JInternalFrame$JDesktopIcon, icon, nullptr);
	if (this->this$0->frame != nullptr) {
		$assign(icon, $nc(this->this$0->frame)->getDesktopIcon());
		if ($nc(this->this$0->frame)->isMaximum()) {
			$nc(this->this$0->frame)->setBounds(0, 0, $nc(parentNewBounds)->width, parentNewBounds->height);
		}
	}
	if (icon != nullptr) {
		$var($Rectangle, iconBounds, icon->getBounds());
		int32_t y = $nc(iconBounds)->y + ($nc(parentNewBounds)->height - $nc(this->this$0->parentBounds)->height);
		icon->setBounds(iconBounds->x, y, iconBounds->width, iconBounds->height);
	}
	if (!$nc(this->this$0->parentBounds)->equals(parentNewBounds)) {
		$set(this->this$0, parentBounds, parentNewBounds);
	}
	if (this->this$0->frame != nullptr) {
		$nc(this->this$0->frame)->validate();
	}
}

void BasicInternalFrameUI$Handler::componentMoved($ComponentEvent* e) {
}

void BasicInternalFrameUI$Handler::componentShown($ComponentEvent* e) {
}

void BasicInternalFrameUI$Handler::componentHidden($ComponentEvent* e) {
}

void BasicInternalFrameUI$Handler::internalFrameClosed($InternalFrameEvent* e) {
	$nc(this->this$0->frame)->removeInternalFrameListener($(this->this$0->getHandler()));
}

void BasicInternalFrameUI$Handler::internalFrameActivated($InternalFrameEvent* e) {
	if (!this->this$0->isKeyBindingRegistered()) {
		this->this$0->setKeyBindingRegistered(true);
		this->this$0->setupMenuOpenKey();
		this->this$0->setupMenuCloseKey();
	}
	if (this->this$0->isKeyBindingRegistered()) {
		this->this$0->setKeyBindingActive(true);
	}
}

void BasicInternalFrameUI$Handler::internalFrameDeactivated($InternalFrameEvent* e) {
	this->this$0->setKeyBindingActive(false);
}

void BasicInternalFrameUI$Handler::internalFrameClosing($InternalFrameEvent* e) {
}

void BasicInternalFrameUI$Handler::internalFrameOpened($InternalFrameEvent* e) {
}

void BasicInternalFrameUI$Handler::internalFrameIconified($InternalFrameEvent* e) {
}

void BasicInternalFrameUI$Handler::internalFrameDeiconified($InternalFrameEvent* e) {
}

void BasicInternalFrameUI$Handler::addLayoutComponent($String* name, $Component* c) {
}

void BasicInternalFrameUI$Handler::removeLayoutComponent($Component* c) {
}

$Dimension* BasicInternalFrameUI$Handler::preferredLayoutSize($Container* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, result, nullptr);
	$var($Insets, i, $nc(this->this$0->frame)->getInsets());
	$assign(result, $new($Dimension, $($nc($($nc(this->this$0->frame)->getRootPane()))->getPreferredSize())));
	result->width += $nc(i)->left + i->right;
	result->height += i->top + i->bottom;
	if (this->this$0->getNorthPane() != nullptr) {
		$var($Dimension, d, $nc($(this->this$0->getNorthPane()))->getPreferredSize());
		result->width = $Math::max($nc(d)->width, result->width);
		result->height += $nc(d)->height;
	}
	if (this->this$0->getSouthPane() != nullptr) {
		$var($Dimension, d, $nc($(this->this$0->getSouthPane()))->getPreferredSize());
		result->width = $Math::max($nc(d)->width, result->width);
		result->height += $nc(d)->height;
	}
	if (this->this$0->getEastPane() != nullptr) {
		$var($Dimension, d, $nc($(this->this$0->getEastPane()))->getPreferredSize());
		result->width += $nc(d)->width;
		result->height = $Math::max(d->height, result->height);
	}
	if (this->this$0->getWestPane() != nullptr) {
		$var($Dimension, d, $nc($(this->this$0->getWestPane()))->getPreferredSize());
		result->width += $nc(d)->width;
		result->height = $Math::max(d->height, result->height);
	}
	return result;
}

$Dimension* BasicInternalFrameUI$Handler::minimumLayoutSize($Container* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, result, $new($Dimension));
	bool var$0 = this->this$0->getNorthPane() != nullptr;
	if (var$0 && $instanceOf($BasicInternalFrameTitlePane, $(this->this$0->getNorthPane()))) {
		$assign(result, $new($Dimension, $($nc($(this->this$0->getNorthPane()))->getMinimumSize())));
	}
	$var($Insets, i, $nc(this->this$0->frame)->getInsets());
	result->width += $nc(i)->left + i->right;
	result->height += i->top + i->bottom;
	return result;
}

void BasicInternalFrameUI$Handler::layoutContainer($Container* c) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, i, $nc(this->this$0->frame)->getInsets());
	int32_t cx = 0;
	int32_t cy = 0;
	int32_t cw = 0;
	int32_t ch = 0;
	cx = $nc(i)->left;
	cy = i->top;
	cw = $nc(this->this$0->frame)->getWidth() - i->left - i->right;
	ch = $nc(this->this$0->frame)->getHeight() - i->top - i->bottom;
	if (this->this$0->getNorthPane() != nullptr) {
		$var($Dimension, size, $nc($(this->this$0->getNorthPane()))->getPreferredSize());
		if ($DefaultLookup::getBoolean(this->this$0->frame, this->this$0, "InternalFrame.layoutTitlePaneAtOrigin"_s, false)) {
			cy = 0;
			ch += i->top;
			$nc($(this->this$0->getNorthPane()))->setBounds(0, 0, $nc(this->this$0->frame)->getWidth(), $nc(size)->height);
		} else {
			$nc($(this->this$0->getNorthPane()))->setBounds(cx, cy, cw, $nc(size)->height);
		}
		cy += $nc(size)->height;
		ch -= size->height;
	}
	if (this->this$0->getSouthPane() != nullptr) {
		$var($Dimension, size, $nc($(this->this$0->getSouthPane()))->getPreferredSize());
		$nc($(this->this$0->getSouthPane()))->setBounds(cx, $nc(this->this$0->frame)->getHeight() - i->bottom - $nc(size)->height, cw, size->height);
		ch -= $nc(size)->height;
	}
	if (this->this$0->getWestPane() != nullptr) {
		$var($Dimension, size, $nc($(this->this$0->getWestPane()))->getPreferredSize());
		$nc($(this->this$0->getWestPane()))->setBounds(cx, cy, $nc(size)->width, ch);
		cw -= $nc(size)->width;
		cx += size->width;
	}
	if (this->this$0->getEastPane() != nullptr) {
		$var($Dimension, size, $nc($(this->this$0->getEastPane()))->getPreferredSize());
		$nc($(this->this$0->getEastPane()))->setBounds(cw - $nc(size)->width, cy, size->width, ch);
		cw -= $nc(size)->width;
	}
	if ($nc(this->this$0->frame)->getRootPane() != nullptr) {
		$nc($($nc(this->this$0->frame)->getRootPane()))->setBounds(cx, cy, cw, ch);
	}
}

void BasicInternalFrameUI$Handler::mousePressed($MouseEvent* e) {
}

void BasicInternalFrameUI$Handler::mouseEntered($MouseEvent* e) {
}

void BasicInternalFrameUI$Handler::mouseMoved($MouseEvent* e) {
}

void BasicInternalFrameUI$Handler::mouseExited($MouseEvent* e) {
}

void BasicInternalFrameUI$Handler::mouseClicked($MouseEvent* e) {
}

void BasicInternalFrameUI$Handler::mouseReleased($MouseEvent* e) {
}

void BasicInternalFrameUI$Handler::mouseDragged($MouseEvent* e) {
}

void BasicInternalFrameUI$Handler::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(evt)->getPropertyName());
	$var($JInternalFrame, f, $cast($JInternalFrame, evt->getSource()));
	$var($Object, newValue, evt->getNewValue());
	$var($Object, oldValue, evt->getOldValue());
	$init($JInternalFrame);
	if ($JInternalFrame::IS_CLOSED_PROPERTY == prop) {
		$init($Boolean);
		if ($equals(newValue, $Boolean::TRUE)) {
			this->this$0->cancelResize();
			if (($nc(this->this$0->frame)->getParent() != nullptr) && this->this$0->componentListenerAdded) {
				$nc($($nc(this->this$0->frame)->getParent()))->removeComponentListener(this->this$0->componentListener);
			}
			this->this$0->closeFrame(f);
		}
	} else {
		if ($JInternalFrame::IS_MAXIMUM_PROPERTY == prop) {
			$init($Boolean);
			if ($equals(newValue, $Boolean::TRUE)) {
				this->this$0->maximizeFrame(f);
			} else {
				this->this$0->minimizeFrame(f);
			}
		} else {
			if ($JInternalFrame::IS_ICON_PROPERTY == prop) {
				$init($Boolean);
				if ($equals(newValue, $Boolean::TRUE)) {
					this->this$0->iconifyFrame(f);
				} else {
					this->this$0->deiconifyFrame(f);
				}
			} else {
				if ($JInternalFrame::IS_SELECTED_PROPERTY == prop) {
					$init($Boolean);
					if ($equals(newValue, $Boolean::TRUE) && $equals(oldValue, $Boolean::FALSE)) {
						this->this$0->activateFrame(f);
					} else {
						if ($equals(newValue, $Boolean::FALSE) && $equals(oldValue, $Boolean::TRUE)) {
							this->this$0->deactivateFrame(f);
						}
					}
				} else if (prop == "ancestor"_s) {
					if (newValue == nullptr) {
						this->this$0->cancelResize();
					}
					if ($nc(this->this$0->frame)->getParent() != nullptr) {
						$set(this->this$0, parentBounds, $nc($($nc(f)->getParent()))->getBounds());
					} else {
						$set(this->this$0, parentBounds, nullptr);
					}
					bool var$0 = ($nc(this->this$0->frame)->getParent() != nullptr);
					if (var$0 && $nc(this->this$0->frame)->isIcon()) {
						$var($Boolean, value, $cast($Boolean, $nc(this->this$0->frame)->getClientProperty("wasIconOnce"_s)));
						$init($Boolean);
						if ($nc($Boolean::FALSE)->equals(value)) {
							this->this$0->iconifyFrame(this->this$0->frame);
						}
					}
					if (($nc(this->this$0->frame)->getParent() != nullptr) && !this->this$0->componentListenerAdded) {
						$nc($($nc(f)->getParent()))->addComponentListener(this->this$0->componentListener);
						this->this$0->componentListenerAdded = true;
						if (f->isMaximum()) {
							this->this$0->maximizeFrame(f);
						}
					}
				} else {
					if ($JInternalFrame::TITLE_PROPERTY == prop || prop == "closable"_s || prop == "iconable"_s || prop == "maximizable"_s) {
						$var($Dimension, dim, $nc(this->this$0->frame)->getMinimumSize());
						$var($Dimension, frame_dim, $nc(this->this$0->frame)->getSize());
						if ($nc(dim)->width > $nc(frame_dim)->width) {
							$nc(this->this$0->frame)->setSize(dim->width, frame_dim->height);
						}
					}
				}
			}
		}
	}
}

BasicInternalFrameUI$Handler::BasicInternalFrameUI$Handler() {
}

$Class* BasicInternalFrameUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameUI$Handler, name, initialize, &_BasicInternalFrameUI$Handler_ClassInfo_, allocate$BasicInternalFrameUI$Handler);
	return class$;
}

$Class* BasicInternalFrameUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax