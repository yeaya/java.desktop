#include <sun/lwawt/macosx/CDragSourceContextPeer.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Stroke.h>
#include <java/awt/Transparency.h>
#include <java/awt/Window.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Map.h>
#include <java/util/concurrent/Callable.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTree.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <sun/awt/dnd/SunDropTargetContextPeer.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CCursorManager.h>
#include <sun/lwawt/macosx/CDragSourceContextPeer$1.h>
#include <sun/lwawt/macosx/CImage$Creator.h>
#include <sun/lwawt/macosx/CImage.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef DISPATCH_MOUSE_MOVED
#undef TRANSLUCENT

using $ComponentArray = $Array<::java::awt::Component>;
using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Stroke = ::java::awt::Stroke;
using $Transparency = ::java::awt::Transparency;
using $Window = ::java::awt::Window;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Map = ::java::util::Map;
using $Callable = ::java::util::concurrent::Callable;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JTable = ::javax::swing::JTable;
using $JTree = ::javax::swing::JTree;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;
using $SunDropTargetContextPeer = ::sun::awt::dnd::SunDropTargetContextPeer;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $CCursorManager = ::sun::lwawt::macosx::CCursorManager;
using $CDragSourceContextPeer$1 = ::sun::lwawt::macosx::CDragSourceContextPeer$1;
using $CImage = ::sun::lwawt::macosx::CImage;
using $CImage$Creator = ::sun::lwawt::macosx::CImage$Creator;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CDragSourceContextPeer$$Lambda$lambda$startDrag$0 : public $Runnable {
	$class(CDragSourceContextPeer$$Lambda$lambda$startDrag$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(CDragSourceContextPeer* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$startDrag$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CDragSourceContextPeer$$Lambda$lambda$startDrag$0>());
	}
	CDragSourceContextPeer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CDragSourceContextPeer$$Lambda$lambda$startDrag$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CDragSourceContextPeer$$Lambda$lambda$startDrag$0, inst$)},
	{}
};
$MethodInfo CDragSourceContextPeer$$Lambda$lambda$startDrag$0::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CDragSourceContextPeer;)V", nullptr, $PUBLIC, $method(static_cast<void(CDragSourceContextPeer$$Lambda$lambda$startDrag$0::*)(CDragSourceContextPeer*)>(&CDragSourceContextPeer$$Lambda$lambda$startDrag$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CDragSourceContextPeer$$Lambda$lambda$startDrag$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CDragSourceContextPeer$$Lambda$lambda$startDrag$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* CDragSourceContextPeer$$Lambda$lambda$startDrag$0::load$($String* name, bool initialize) {
	$loadClass(CDragSourceContextPeer$$Lambda$lambda$startDrag$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CDragSourceContextPeer$$Lambda$lambda$startDrag$0::class$ = nullptr;

$FieldInfo _CDragSourceContextPeer_FieldInfo_[] = {
	{"fInstance", "Lsun/lwawt/macosx/CDragSourceContextPeer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CDragSourceContextPeer, fInstance)},
	{"fDragImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(CDragSourceContextPeer, fDragImage)},
	{"fDragCImage", "Lsun/lwawt/macosx/CImage;", nullptr, $PRIVATE, $field(CDragSourceContextPeer, fDragCImage)},
	{"fDragImageOffset", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(CDragSourceContextPeer, fDragImageOffset)},
	{"hoveringComponent", "Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $staticField(CDragSourceContextPeer, hoveringComponent)},
	{"fMaxImageSize", "D", nullptr, $PRIVATE | $STATIC, $staticField(CDragSourceContextPeer, fMaxImageSize)},
	{}
};

$MethodInfo _CDragSourceContextPeer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragGestureEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(CDragSourceContextPeer::*)($DragGestureEvent*)>(&CDragSourceContextPeer::init$))},
	{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Lsun/lwawt/macosx/CDragSourceContextPeer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CDragSourceContextPeer*(*)($DragGestureEvent*)>(&CDragSourceContextPeer::createDragSourceContextPeer)), "java.awt.dnd.InvalidDnDOperationException"},
	{"createNativeDragSource", "(Ljava/awt/Component;JLjava/awt/datatransfer/Transferable;Ljava/awt/event/InputEvent;IIIIJJIII[JLjava/util/Map;)J", "(Ljava/awt/Component;JLjava/awt/datatransfer/Transferable;Ljava/awt/event/InputEvent;IIIIJJIII[JLjava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;)J", $PRIVATE | $NATIVE, $method(static_cast<int64_t(CDragSourceContextPeer::*)($Component*,int64_t,$Transferable*,$InputEvent*,int32_t,int32_t,int32_t,int32_t,int64_t,int64_t,int32_t,int32_t,int32_t,$longs*,$Map*)>(&CDragSourceContextPeer::createNativeDragSource))},
	{"doDragging", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CDragSourceContextPeer::*)(int64_t)>(&CDragSourceContextPeer::doDragging))},
	{"dragMouseMoved", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(CDragSourceContextPeer::*)(int32_t,int32_t,int32_t,int32_t)>(&CDragSourceContextPeer::dragMouseMoved))},
	{"getDropTargetAt", "(Ljava/awt/Component;II)Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Component*(*)($Component*,int32_t,int32_t)>(&CDragSourceContextPeer::getDropTargetAt))},
	{"lambda$startDrag$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CDragSourceContextPeer::*)()>(&CDragSourceContextPeer::lambda$startDrag$0))},
	{"releaseNativeDragSource", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CDragSourceContextPeer::*)(int64_t)>(&CDragSourceContextPeer::releaseNativeDragSource))},
	{"resetHovering", "()V", nullptr, $PRIVATE, $method(static_cast<void(CDragSourceContextPeer::*)()>(&CDragSourceContextPeer::resetHovering))},
	{"setDefaultDragImage", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(CDragSourceContextPeer::*)($Component*)>(&CDragSourceContextPeer::setDefaultDragImage))},
	{"setDefaultDragImage", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(CDragSourceContextPeer::*)($JTextComponent*)>(&CDragSourceContextPeer::setDefaultDragImage))},
	{"setDefaultDragImage", "(Ljavax/swing/JTree;)V", nullptr, $PRIVATE, $method(static_cast<void(CDragSourceContextPeer::*)($JTree*)>(&CDragSourceContextPeer::setDefaultDragImage))},
	{"setDefaultDragImage", "(Ljavax/swing/JTable;)V", nullptr, $PRIVATE, $method(static_cast<void(CDragSourceContextPeer::*)($JTable*)>(&CDragSourceContextPeer::setDefaultDragImage))},
	{"setDefaultDragImage", "(Ljavax/swing/JList;)V", "(Ljavax/swing/JList<*>;)V", $PRIVATE, $method(static_cast<void(CDragSourceContextPeer::*)($JList*)>(&CDragSourceContextPeer::setDefaultDragImage))},
	{"setDefaultDragImage", "()V", nullptr, $PRIVATE, $method(static_cast<void(CDragSourceContextPeer::*)()>(&CDragSourceContextPeer::setDefaultDragImage))},
	{"setNativeCursor", "(JLjava/awt/Cursor;I)V", nullptr, $PROTECTED},
	{"setOutlineDragImage", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(CDragSourceContextPeer::*)($Rectangle*)>(&CDragSourceContextPeer::setOutlineDragImage))},
	{"setOutlineDragImage", "(Ljava/awt/Rectangle;Ljava/lang/Boolean;)V", nullptr, $PRIVATE, $method(static_cast<void(CDragSourceContextPeer::*)($Rectangle*,$Boolean*)>(&CDragSourceContextPeer::setOutlineDragImage))},
	{"startDrag", "(Ljava/awt/dnd/DragSourceContext;Ljava/awt/Cursor;Ljava/awt/Image;Ljava/awt/Point;)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"startDrag", "(Ljava/awt/datatransfer/Transferable;[JLjava/util/Map;)V", "(Ljava/awt/datatransfer/Transferable;[JLjava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;)V", $PROTECTED},
	{}
};

#define _METHOD_INDEX_createNativeDragSource 2
#define _METHOD_INDEX_doDragging 3
#define _METHOD_INDEX_releaseNativeDragSource 7

$InnerClassInfo _CDragSourceContextPeer_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CDragSourceContextPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CDragSourceContextPeer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CDragSourceContextPeer",
	"sun.awt.dnd.SunDragSourceContextPeer",
	nullptr,
	_CDragSourceContextPeer_FieldInfo_,
	_CDragSourceContextPeer_MethodInfo_,
	nullptr,
	nullptr,
	_CDragSourceContextPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CDragSourceContextPeer$1"
};

$Object* allocate$CDragSourceContextPeer($Class* clazz) {
	return $of($alloc(CDragSourceContextPeer));
}

CDragSourceContextPeer* CDragSourceContextPeer::fInstance = nullptr;
$Component* CDragSourceContextPeer::hoveringComponent = nullptr;
double CDragSourceContextPeer::fMaxImageSize = 0.0;

void CDragSourceContextPeer::init$($DragGestureEvent* dge) {
	$SunDragSourceContextPeer::init$(dge);
}

CDragSourceContextPeer* CDragSourceContextPeer::createDragSourceContextPeer($DragGestureEvent* dge) {
	$init(CDragSourceContextPeer);
	$nc(CDragSourceContextPeer::fInstance)->setTrigger(dge);
	return CDragSourceContextPeer::fInstance;
}

void CDragSourceContextPeer::startDrag($DragSourceContext* dsc, $Cursor* cursor, $Image* dragImage, $Point* dragImageOffset) {
	$set(this, fDragImage, dragImage);
	$set(this, fDragImageOffset, dragImageOffset);
	$SunDragSourceContextPeer::startDrag(dsc, cursor, dragImage, dragImageOffset);
}

void CDragSourceContextPeer::startDrag($Transferable* transferable, $longs* formats, $Map* formatMap) {
	$useLocalCurrentObjectStackCache();
	$var($DragGestureEvent, trigger, getTrigger());
	$var($InputEvent, triggerEvent, $nc(trigger)->getTriggerEvent());
	$var($Point, dragOrigin, $new($Point, $(trigger->getDragOrigin())));
	int32_t var$0 = $nc(triggerEvent)->getModifiers();
	int32_t extModifiers = (var$0 | triggerEvent->getModifiersEx());
	int64_t timestamp = triggerEvent->getWhen();
	int32_t clickCount = (($instanceOf($MouseEvent, triggerEvent)) ? ($nc(($cast($MouseEvent, triggerEvent)))->getClickCount()) : 1);
	$var($Component, component, trigger->getComponent());
	$var($Point, loc, $nc(component)->getLocation());
	$var($Component, rootComponent, component);
	while (!($instanceOf($Window, rootComponent))) {
		dragOrigin->translate($nc(loc)->x, loc->y);
		$assign(rootComponent, $nc(rootComponent)->getParent());
		$assign(loc, rootComponent->getLocation());
	}
	if (this->fDragImage == nullptr) {
		this->setDefaultDragImage(component);
	}
	$var($Point, dragImageOffset, nullptr);
	if (this->fDragImage != nullptr) {
		try {
			$set(this, fDragCImage, $nc($($CImage::getCreator()))->createFromImageImmediately(this->fDragImage));
		} catch ($Exception& e) {
			$throwNew($InvalidDnDOperationException, "Drag image can not be created."_s);
		}
		if (this->fDragCImage == nullptr) {
			$throwNew($InvalidDnDOperationException, "Drag image is not ready."_s);
		}
		$assign(dragImageOffset, this->fDragImageOffset);
	} else {
		$set(this, fDragCImage, nullptr);
		$assign(dragImageOffset, $new($Point, 0, 0));
	}
	try {
		$var($LWComponentPeer, peer, $cast($LWComponentPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(rootComponent)));
		$var($PlatformWindow, platformWindow, $nc(peer)->getPlatformWindow());
		int64_t nativeViewPtr = $CPlatformWindow::getNativeViewPtr(platformWindow);
		if (nativeViewPtr == (int64_t)0) {
			$throwNew($InvalidDnDOperationException, "Unsupported platform window implementation"_s);
		}
		$var($Component, var$1, component);
		int64_t var$2 = nativeViewPtr;
		$var($Transferable, var$3, transferable);
		$var($InputEvent, var$4, triggerEvent);
		int32_t var$5 = $cast(int32_t, (dragOrigin->getX()));
		int32_t var$6 = $cast(int32_t, (dragOrigin->getY()));
		int32_t var$7 = extModifiers;
		int32_t var$8 = clickCount;
		int64_t var$9 = timestamp;
		int64_t var$10 = this->fDragCImage != nullptr ? $cast(int64_t, $nc(this->fDragCImage)->ptr) : (int64_t)0;
		int32_t var$11 = $nc(dragImageOffset)->x;
		int32_t var$12 = dragImageOffset->y;
		int64_t nativeDragSource = createNativeDragSource(var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, var$11, var$12, $nc($(getDragSourceContext()))->getSourceActions(), formats, formatMap);
		if (nativeDragSource == 0) {
			$throwNew($InvalidDnDOperationException, ""_s);
		}
		setNativeContext(nativeDragSource);
	} catch ($Exception& e) {
		$throwNew($InvalidDnDOperationException, $$str({"failed to create native peer: "_s, e}));
	}
	$SunDropTargetContextPeer::setCurrentJVMLocalSourceTransferable(transferable);
	$nc($($CCursorManager::getInstance()))->setCursor($(getCursor()));
	try {
		$var($Runnable, dragRunnable, static_cast<$Runnable*>($new(CDragSourceContextPeer$$Lambda$lambda$startDrag$0, this)));
		$$new($Thread, nullptr, dragRunnable, "Drag"_s, 0, false)->start();
	} catch ($Exception& e) {
		int64_t nativeDragSource = getNativeContext();
		setNativeContext(0);
		releaseNativeDragSource(nativeDragSource);
		$SunDropTargetContextPeer::setCurrentJVMLocalSourceTransferable(nullptr);
		$throwNew($InvalidDnDOperationException, $$str({"failed to start dragging thread: "_s, e}));
	}
}

void CDragSourceContextPeer::setDefaultDragImage($Component* component) {
	bool handled = false;
	if ($nc(component)->isLightweight()) {
		if ($instanceOf($JTextComponent, component)) {
			this->setDefaultDragImage($cast($JTextComponent, component));
			handled = true;
		} else if ($instanceOf($JTree, component)) {
			this->setDefaultDragImage($cast($JTree, component));
			handled = true;
		} else if ($instanceOf($JTable, component)) {
			this->setDefaultDragImage($cast($JTable, component));
			handled = true;
		} else if ($instanceOf($JList, component)) {
			this->setDefaultDragImage($cast($JList, component));
			handled = true;
		}
	}
	if (handled == false) {
		this->setDefaultDragImage();
	}
}

void CDragSourceContextPeer::setDefaultDragImage($JTextComponent* component) {
	$useLocalCurrentObjectStackCache();
	$var($DragGestureEvent, trigger, getTrigger());
	int32_t selectionStart = $nc(component)->getSelectionStart();
	int32_t selectionEnd = component->getSelectionEnd();
	bool handled = false;
	int32_t index = component->viewToModel($($nc(trigger)->getDragOrigin()));
	if ((selectionStart < selectionEnd) && (index >= selectionStart) && (index <= selectionEnd)) {
		try {
			$var($Rectangle, selectionStartBounds, component->modelToView(selectionStart));
			$var($Rectangle, selectionEndBounds, component->modelToView(selectionEnd));
			$var($Rectangle, selectionBounds, nullptr);
			if ($nc(selectionStartBounds)->y == $nc(selectionEndBounds)->y) {
				$assign(selectionBounds, $new($Rectangle, selectionStartBounds->x, selectionStartBounds->y, selectionEndBounds->x - selectionStartBounds->x + selectionEndBounds->width, selectionEndBounds->y - selectionStartBounds->y + selectionEndBounds->height));
			} else {
				$var($AccessibleContext, ctx, component->getAccessibleContext());
				$var($AccessibleText, at, $cast($AccessibleText, ctx));
				$assign(selectionBounds, component->modelToView(selectionStart));
				for (int32_t i = selectionStart + 1; i <= selectionEnd; ++i) {
					$var($Rectangle, charBounds, $nc(at)->getCharacterBounds(i));
					if (charBounds != nullptr) {
						$nc(selectionBounds)->add(charBounds);
					}
				}
			}
			this->setOutlineDragImage(selectionBounds);
			handled = true;
		} catch ($BadLocationException& exc) {
		}
	}
	if (handled == false) {
		this->setDefaultDragImage();
	}
}

void CDragSourceContextPeer::setDefaultDragImage($JTree* component) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, selectedOutline, nullptr);
	$var($ints, selectedRows, $nc(component)->getSelectionRows());
	for (int32_t i = 0; i < $nc(selectedRows)->length; ++i) {
		$var($Rectangle, r, component->getRowBounds(selectedRows->get(i)));
		if (selectedOutline == nullptr) {
			$assign(selectedOutline, r);
		} else {
			$nc(selectedOutline)->add(r);
		}
	}
	if (selectedOutline != nullptr) {
		this->setOutlineDragImage(selectedOutline);
	} else {
		this->setDefaultDragImage();
	}
}

void CDragSourceContextPeer::setDefaultDragImage($JTable* component) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, selectedOutline, nullptr);
	$var($ints, selectedRows, $nc(component)->getSelectedRows());
	$var($ints, selectedColumns, component->getSelectedColumns());
	for (int32_t row = 0; row < $nc(selectedRows)->length; ++row) {
		for (int32_t col = 0; col < $nc(selectedColumns)->length; ++col) {
			$var($Rectangle, r, component->getCellRect(selectedRows->get(row), selectedColumns->get(col), true));
			if (selectedOutline == nullptr) {
				$assign(selectedOutline, r);
			} else {
				$nc(selectedOutline)->add(r);
			}
		}
	}
	if (selectedOutline != nullptr) {
		this->setOutlineDragImage(selectedOutline);
	} else {
		this->setDefaultDragImage();
	}
}

void CDragSourceContextPeer::setDefaultDragImage($JList* component) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, selectedOutline, nullptr);
	$var($ints, selectedIndices, $nc(component)->getSelectedIndices());
	if ($nc(selectedIndices)->length > 0) {
		$assign(selectedOutline, component->getCellBounds(selectedIndices->get(0), selectedIndices->get(selectedIndices->length - 1)));
	}
	if (selectedOutline != nullptr) {
		this->setOutlineDragImage(selectedOutline);
	} else {
		this->setDefaultDragImage();
	}
}

void CDragSourceContextPeer::setDefaultDragImage() {
	$useLocalCurrentObjectStackCache();
	$var($DragGestureEvent, trigger, this->getTrigger());
	$var($Component, comp, $nc(trigger)->getComponent());
	int32_t var$1 = $nc(comp)->getWidth();
	$var($Rectangle, var$0, $new($Rectangle, 0, 0, var$1, comp->getHeight()));
	setOutlineDragImage(var$0, $($Boolean::valueOf(true)));
}

void CDragSourceContextPeer::setOutlineDragImage($Rectangle* outline) {
	setOutlineDragImage(outline, $($Boolean::valueOf(false)));
}

void CDragSourceContextPeer::setOutlineDragImage($Rectangle* outline$renamed, $Boolean* shouldScale) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, outline, outline$renamed);
	int32_t width = $cast(int32_t, $nc(outline)->getWidth());
	int32_t height = $cast(int32_t, outline->getHeight());
	double scale = 1.0;
	if ($nc((shouldScale))->booleanValue()) {
		int32_t area = width * height;
		int32_t maxArea = $cast(int32_t, (CDragSourceContextPeer::fMaxImageSize * CDragSourceContextPeer::fMaxImageSize));
		if (area > maxArea) {
			scale = (double)area / (double)maxArea;
			width /= scale;
			height /= scale;
		}
	}
	if (width <= 0) {
		width = 1;
	}
	if (height <= 0) {
		height = 1;
	}
	$var($DragGestureEvent, trigger, this->getTrigger());
	$var($Component, comp, $nc(trigger)->getComponent());
	$var($Point, compOffset, $nc(comp)->getLocation());
	if ($instanceOf($JComponent, comp)) {
		$var($Rectangle, visibleBounds, $nc(($cast($JComponent, comp)))->getVisibleRect());
		$var($Rectangle, clipedOutline, outline->intersection(visibleBounds));
		if ($nc(clipedOutline)->isEmpty() == false) {
			$assign(outline, clipedOutline);
		}
		outline->translate($nc(compOffset)->x, compOffset->y);
	}
	$var($GraphicsConfiguration, config, comp->getGraphicsConfiguration());
	$var($BufferedImage, dragImage, $nc(config)->createCompatibleImage(width, height, $Transparency::TRANSLUCENT));
	$init($Color);
	$var($Color, paint, $Color::gray);
	$var($BasicStroke, stroke, $new($BasicStroke, 2.0f));
	int32_t halfLineWidth = $cast(int32_t, (stroke->getLineWidth() + 1)) / 2;
	$var($Graphics2D, g2, $cast($Graphics2D, $nc(dragImage)->getGraphics()));
	$nc(g2)->setPaint(paint);
	g2->setStroke(stroke);
	g2->drawRect(halfLineWidth, halfLineWidth, width - 2 * halfLineWidth - 1, height - 2 * halfLineWidth - 1);
	g2->dispose();
	$set(this, fDragImage, dragImage);
	$var($Point, dragOrigin, trigger->getDragOrigin());
	$var($Point, dragImageOffset, $new($Point, outline->x - $nc(dragOrigin)->x, outline->y - dragOrigin->y));
	if ($instanceOf($JComponent, comp)) {
		dragImageOffset->translate(-$nc(compOffset)->x, -compOffset->y);
	}
	if ($nc((shouldScale))->booleanValue()) {
		dragImageOffset->x /= scale;
		dragImageOffset->y /= scale;
	}
	$set(this, fDragImageOffset, dragImageOffset);
}

void CDragSourceContextPeer::dragMouseMoved(int32_t targetActions, int32_t modifiers, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Callable, var$0, static_cast<$Callable*>($new($CDragSourceContextPeer$1, this, x, y)));
		$var($Component, componentAt, $cast($Component, $LWCToolkit::invokeAndWait(var$0, $(getComponent()))));
		if (componentAt != CDragSourceContextPeer::hoveringComponent) {
			if (CDragSourceContextPeer::hoveringComponent != nullptr) {
				dragExit(x, y);
			}
			if (componentAt != nullptr) {
				dragEnter(targetActions, modifiers, x, y);
			}
			$assignStatic(CDragSourceContextPeer::hoveringComponent, componentAt);
		}
		postDragSourceDragEvent(targetActions, modifiers, x, y, $SunDragSourceContextPeer::DISPATCH_MOUSE_MOVED);
	} catch ($Exception& e) {
		$throwNew($InvalidDnDOperationException, "Failed to handle DragMouseMoved event"_s);
	}
}

$Component* CDragSourceContextPeer::getDropTargetAt($Component* root, int32_t x, int32_t y) {
	$init(CDragSourceContextPeer);
	$useLocalCurrentObjectStackCache();
	bool var$1 = !$nc(root)->contains(x, y);
	bool var$0 = var$1 || !$nc(root)->isEnabled();
	if (var$0 || !$nc(root)->isVisible()) {
		return nullptr;
	}
	bool var$2 = $nc(root)->getDropTarget() != nullptr;
	if (var$2 && $nc($(root->getDropTarget()))->isActive()) {
		return root;
	}
	if ($instanceOf($Container, root)) {
		{
			$var($ComponentArray, arr$, $nc(($cast($Container, root)))->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					$var($Point, loc, $nc(comp)->getLocation());
					$var($Component, dropTarget, getDropTargetAt(comp, x - $nc(loc)->x, y - loc->y));
					if (dropTarget != nullptr) {
						return dropTarget;
					}
				}
			}
		}
	}
	return nullptr;
}

void CDragSourceContextPeer::resetHovering() {
	$assignStatic(CDragSourceContextPeer::hoveringComponent, nullptr);
}

void CDragSourceContextPeer::setNativeCursor(int64_t nativeCtxt, $Cursor* c, int32_t cType) {
	$nc($($CCursorManager::getInstance()))->setCursor(c);
}

int64_t CDragSourceContextPeer::createNativeDragSource($Component* component, int64_t nativePeer, $Transferable* transferable, $InputEvent* triggerEvent, int32_t dragPosX, int32_t dragPosY, int32_t extModifiers, int32_t clickCount, int64_t timestamp, int64_t nsDragImagePtr, int32_t dragImageOffsetX, int32_t dragImageOffsetY, int32_t sourceActions, $longs* formats, $Map* formatMap) {
	int64_t $ret = 0;
	$prepareNative(CDragSourceContextPeer, createNativeDragSource, int64_t, $Component* component, int64_t nativePeer, $Transferable* transferable, $InputEvent* triggerEvent, int32_t dragPosX, int32_t dragPosY, int32_t extModifiers, int32_t clickCount, int64_t timestamp, int64_t nsDragImagePtr, int32_t dragImageOffsetX, int32_t dragImageOffsetY, int32_t sourceActions, $longs* formats, $Map* formatMap);
	$ret = $invokeNative(component, nativePeer, transferable, triggerEvent, dragPosX, dragPosY, extModifiers, clickCount, timestamp, nsDragImagePtr, dragImageOffsetX, dragImageOffsetY, sourceActions, formats, formatMap);
	$finishNative();
	return $ret;
}

void CDragSourceContextPeer::doDragging(int64_t nativeDragSource) {
	$prepareNative(CDragSourceContextPeer, doDragging, void, int64_t nativeDragSource);
	$invokeNative(nativeDragSource);
	$finishNative();
}

void CDragSourceContextPeer::releaseNativeDragSource(int64_t nativeDragSource) {
	$prepareNative(CDragSourceContextPeer, releaseNativeDragSource, void, int64_t nativeDragSource);
	$invokeNative(nativeDragSource);
	$finishNative();
}

void CDragSourceContextPeer::lambda$startDrag$0() {
	int64_t nativeDragSource = getNativeContext();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				doDragging(nativeDragSource);
			} catch ($Exception& e) {
				e->printStackTrace();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			releaseNativeDragSource(nativeDragSource);
			$set(this, fDragImage, nullptr);
			if (this->fDragCImage != nullptr) {
				$nc(this->fDragCImage)->dispose();
				$set(this, fDragCImage, nullptr);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$CDragSourceContextPeer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(CDragSourceContextPeer::fInstance, $new(CDragSourceContextPeer, nullptr));
	$assignStatic(CDragSourceContextPeer::hoveringComponent, nullptr);
	CDragSourceContextPeer::fMaxImageSize = 128.0;
	{
		$var($String, propValue, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "apple.awt.dnd.defaultDragImageSize"_s)))));
		if (propValue != nullptr) {
			try {
				double value = $Double::parseDouble(propValue);
				if (value > 0) {
					CDragSourceContextPeer::fMaxImageSize = value;
				}
			} catch ($NumberFormatException& e) {
			}
		}
	}
}

CDragSourceContextPeer::CDragSourceContextPeer() {
}

$Class* CDragSourceContextPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CDragSourceContextPeer$$Lambda$lambda$startDrag$0::classInfo$.name)) {
			return CDragSourceContextPeer$$Lambda$lambda$startDrag$0::load$(name, initialize);
		}
	}
	$loadClass(CDragSourceContextPeer, name, initialize, &_CDragSourceContextPeer_ClassInfo_, clinit$CDragSourceContextPeer, allocate$CDragSourceContextPeer);
	return class$;
}

$Class* CDragSourceContextPeer::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun