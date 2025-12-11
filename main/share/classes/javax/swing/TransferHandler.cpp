#include <javax/swing/TransferHandler.h>

#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/ClipboardOwner.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DropTargetListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/IntrospectionException.h>
#include <java/beans/Introspector.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Action.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/TransferHandler$DragHandler.h>
#include <javax/swing/TransferHandler$DropHandler.h>
#include <javax/swing/TransferHandler$PropertyTransferable.h>
#include <javax/swing/TransferHandler$SwingDragGestureRecognizer.h>
#include <javax/swing/TransferHandler$TransferAction.h>
#include <javax/swing/TransferHandler$TransferSupport.h>
#include <sun/awt/AppContext.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef COPY
#undef COPY_OR_MOVE
#undef LINK
#undef MOVE
#undef NONE

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $ClipboardOwner = ::java::awt::datatransfer::ClipboardOwner;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DropTargetListener = ::java::awt::dnd::DropTargetListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $BeanInfo = ::java::beans::BeanInfo;
using $IntrospectionException = ::java::beans::IntrospectionException;
using $Introspector = ::java::beans::Introspector;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Action = ::javax::swing::Action;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $TransferHandler$DragHandler = ::javax::swing::TransferHandler$DragHandler;
using $TransferHandler$DropHandler = ::javax::swing::TransferHandler$DropHandler;
using $TransferHandler$PropertyTransferable = ::javax::swing::TransferHandler$PropertyTransferable;
using $TransferHandler$SwingDragGestureRecognizer = ::javax::swing::TransferHandler$SwingDragGestureRecognizer;
using $TransferHandler$TransferAction = ::javax::swing::TransferHandler$TransferAction;
using $TransferHandler$TransferSupport = ::javax::swing::TransferHandler$TransferSupport;
using $AppContext = ::sun::awt::AppContext;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {

$FieldInfo _TransferHandler_FieldInfo_[] = {
	{"NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransferHandler, NONE)},
	{"COPY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransferHandler, COPY)},
	{"MOVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransferHandler, MOVE)},
	{"COPY_OR_MOVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransferHandler, COPY_OR_MOVE)},
	{"LINK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransferHandler, LINK)},
	{"dragImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(TransferHandler, dragImage)},
	{"dragImageOffset", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(TransferHandler, dragImageOffset)},
	{"propertyName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransferHandler, propertyName)},
	{"recognizer", "Ljavax/swing/TransferHandler$SwingDragGestureRecognizer;", nullptr, $PRIVATE | $STATIC, $staticField(TransferHandler, recognizer)},
	{"cutAction", "Ljavax/swing/Action;", nullptr, $STATIC | $FINAL, $staticField(TransferHandler, cutAction)},
	{"copyAction", "Ljavax/swing/Action;", nullptr, $STATIC | $FINAL, $staticField(TransferHandler, copyAction)},
	{"pasteAction", "Ljavax/swing/Action;", nullptr, $STATIC | $FINAL, $staticField(TransferHandler, pasteAction)},
	{}
};

$MethodInfo _TransferHandler_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TransferHandler::*)($String*)>(&TransferHandler::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TransferHandler::*)()>(&TransferHandler::init$))},
	{"canImport", "(Ljavax/swing/TransferHandler$TransferSupport;)Z", nullptr, $PUBLIC},
	{"canImport", "(Ljavax/swing/JComponent;[Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{"createTransferable", "(Ljavax/swing/JComponent;)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED},
	{"exportAsDrag", "(Ljavax/swing/JComponent;Ljava/awt/event/InputEvent;I)V", nullptr, $PUBLIC},
	{"exportDone", "(Ljavax/swing/JComponent;Ljava/awt/datatransfer/Transferable;I)V", nullptr, $PROTECTED},
	{"exportToClipboard", "(Ljavax/swing/JComponent;Ljava/awt/datatransfer/Clipboard;I)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalStateException"},
	{"getCopyAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Action*(*)()>(&TransferHandler::getCopyAction))},
	{"getCutAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Action*(*)()>(&TransferHandler::getCutAction))},
	{"getDragImage", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getDragImageOffset", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getDropTargetListener", "()Ljava/awt/dnd/DropTargetListener;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$DropTargetListener*(*)()>(&TransferHandler::getDropTargetListener))},
	{"getPasteAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Action*(*)()>(&TransferHandler::getPasteAction))},
	{"getPropertyDataFlavor", "(Ljava/lang/Class;[Ljava/awt/datatransfer/DataFlavor;)Ljava/awt/datatransfer/DataFlavor;", "(Ljava/lang/Class<*>;[Ljava/awt/datatransfer/DataFlavor;)Ljava/awt/datatransfer/DataFlavor;", $PRIVATE, $method(static_cast<$DataFlavor*(TransferHandler::*)($Class*,$DataFlavorArray*)>(&TransferHandler::getPropertyDataFlavor))},
	{"getPropertyDescriptor", "(Ljavax/swing/JComponent;)Ljava/beans/PropertyDescriptor;", nullptr, $PRIVATE, $method(static_cast<$PropertyDescriptor*(TransferHandler::*)($JComponent*)>(&TransferHandler::getPropertyDescriptor))},
	{"getSourceActions", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getVisualRepresentation", "(Ljava/awt/datatransfer/Transferable;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"importData", "(Ljavax/swing/TransferHandler$TransferSupport;)Z", nullptr, $PUBLIC},
	{"importData", "(Ljavax/swing/JComponent;Ljava/awt/datatransfer/Transferable;)Z", nullptr, $PUBLIC},
	{"setDragImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setDragImageOffset", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransferHandler_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$TransferAction", "javax.swing.TransferHandler", "TransferAction", $STATIC},
	{"javax.swing.TransferHandler$SwingDragGestureRecognizer", "javax.swing.TransferHandler", "SwingDragGestureRecognizer", $PRIVATE | $STATIC},
	{"javax.swing.TransferHandler$DragHandler", "javax.swing.TransferHandler", "DragHandler", $PRIVATE | $STATIC},
	{"javax.swing.TransferHandler$DropHandler", "javax.swing.TransferHandler", "DropHandler", $PRIVATE | $STATIC},
	{"javax.swing.TransferHandler$SwingDropTarget", "javax.swing.TransferHandler", "SwingDropTarget", $STATIC},
	{"javax.swing.TransferHandler$PropertyTransferable", "javax.swing.TransferHandler", "PropertyTransferable", $STATIC},
	{"javax.swing.TransferHandler$TransferSupport", "javax.swing.TransferHandler", "TransferSupport", $PUBLIC | $STATIC | $FINAL},
	{"javax.swing.TransferHandler$DropLocation", "javax.swing.TransferHandler", "DropLocation", $PUBLIC | $STATIC},
	{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TransferHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.TransferHandler",
	"java.lang.Object",
	"java.io.Serializable",
	_TransferHandler_FieldInfo_,
	_TransferHandler_MethodInfo_,
	nullptr,
	nullptr,
	_TransferHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler$TransferAction,javax.swing.TransferHandler$TransferAction$2,javax.swing.TransferHandler$TransferAction$1,javax.swing.TransferHandler$SwingDragGestureRecognizer,javax.swing.TransferHandler$DragHandler,javax.swing.TransferHandler$DropHandler,javax.swing.TransferHandler$SwingDropTarget,javax.swing.TransferHandler$PropertyTransferable,javax.swing.TransferHandler$TransferSupport,javax.swing.TransferHandler$DropLocation,javax.swing.TransferHandler$HasGetTransferHandler"
};

$Object* allocate$TransferHandler($Class* clazz) {
	return $of($alloc(TransferHandler));
}

$TransferHandler$SwingDragGestureRecognizer* TransferHandler::recognizer = nullptr;
$Action* TransferHandler::cutAction = nullptr;
$Action* TransferHandler::copyAction = nullptr;
$Action* TransferHandler::pasteAction = nullptr;

$Action* TransferHandler::getCutAction() {
	$init(TransferHandler);
	return TransferHandler::cutAction;
}

$Action* TransferHandler::getCopyAction() {
	$init(TransferHandler);
	return TransferHandler::copyAction;
}

$Action* TransferHandler::getPasteAction() {
	$init(TransferHandler);
	return TransferHandler::pasteAction;
}

void TransferHandler::init$($String* property) {
	$set(this, propertyName, property);
}

void TransferHandler::init$() {
	TransferHandler::init$(nullptr);
}

void TransferHandler::setDragImage($Image* img) {
	$set(this, dragImage, img);
}

$Image* TransferHandler::getDragImage() {
	return this->dragImage;
}

void TransferHandler::setDragImageOffset($Point* p) {
	$set(this, dragImageOffset, $new($Point, p));
}

$Point* TransferHandler::getDragImageOffset() {
	if (this->dragImageOffset == nullptr) {
		return $new($Point, 0, 0);
	}
	return $new($Point, this->dragImageOffset);
}

void TransferHandler::exportAsDrag($JComponent* comp, $InputEvent* e, int32_t action) {
	int32_t srcActions = getSourceActions(comp);
	if (!($instanceOf($MouseEvent, e)) || !(action == TransferHandler::COPY || action == TransferHandler::MOVE || action == TransferHandler::LINK) || ((int32_t)(srcActions & (uint32_t)action)) == 0) {
		action = TransferHandler::NONE;
	}
	if (action != TransferHandler::NONE && !$GraphicsEnvironment::isHeadless()) {
		if (TransferHandler::recognizer == nullptr) {
			$assignStatic(TransferHandler::recognizer, $new($TransferHandler$SwingDragGestureRecognizer, $$new($TransferHandler$DragHandler)));
		}
		$nc(TransferHandler::recognizer)->gestured(comp, $cast($MouseEvent, e), srcActions, action);
	} else {
		exportDone(comp, nullptr, TransferHandler::NONE);
	}
}

void TransferHandler::exportToClipboard($JComponent* comp, $Clipboard* clip, int32_t action) {
	if ((action == TransferHandler::COPY || action == TransferHandler::MOVE) && ((int32_t)(getSourceActions(comp) & (uint32_t)action)) != 0) {
		$var($Transferable, t, createTransferable(comp));
		if (t != nullptr) {
			try {
				$nc(clip)->setContents(t, nullptr);
				exportDone(comp, t, action);
				return;
			} catch ($IllegalStateException& ise) {
				exportDone(comp, t, TransferHandler::NONE);
				$throw(ise);
			}
		}
	}
	exportDone(comp, nullptr, TransferHandler::NONE);
}

bool TransferHandler::importData($TransferHandler$TransferSupport* support) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = false;
	if ($instanceOf($JComponent, $($nc(support)->getComponent()))) {
		$var($JComponent, var$1, $cast($JComponent, $nc(support)->getComponent()));
		var$0 = importData(var$1, $(support->getTransferable()));
	} else {
		var$0 = false;
	}
	return var$0;
}

bool TransferHandler::importData($JComponent* comp, $Transferable* t) {
	$useLocalCurrentObjectStackCache();
	$var($PropertyDescriptor, prop, getPropertyDescriptor(comp));
	if (prop != nullptr) {
		$var($Method, writer, prop->getWriteMethod());
		if (writer == nullptr) {
			return false;
		}
		$var($ClassArray, params, $nc(writer)->getParameterTypes());
		if ($nc(params)->length != 1) {
			return false;
		}
		$var($DataFlavor, flavor, getPropertyDataFlavor($nc(params)->get(0), $($nc(t)->getTransferDataFlavors())));
		if (flavor != nullptr) {
			try {
				$var($Object, value, $nc(t)->getTransferData(flavor));
				$var($ObjectArray, args, $new($ObjectArray, {value}));
				$MethodUtil::invoke(writer, comp, args);
				return true;
			} catch ($Exception& ex) {
				$nc($System::err)->println("Invocation failed"_s);
			}
		}
	}
	return false;
}

bool TransferHandler::canImport($TransferHandler$TransferSupport* support) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = false;
	if ($instanceOf($JComponent, $($nc(support)->getComponent()))) {
		$var($JComponent, var$1, $cast($JComponent, $nc(support)->getComponent()));
		var$0 = canImport(var$1, $(support->getDataFlavors()));
	} else {
		var$0 = false;
	}
	return var$0;
}

bool TransferHandler::canImport($JComponent* comp, $DataFlavorArray* transferFlavors) {
	$useLocalCurrentObjectStackCache();
	$var($PropertyDescriptor, prop, getPropertyDescriptor(comp));
	if (prop != nullptr) {
		$var($Method, writer, prop->getWriteMethod());
		if (writer == nullptr) {
			return false;
		}
		$var($ClassArray, params, $nc(writer)->getParameterTypes());
		if ($nc(params)->length != 1) {
			return false;
		}
		$var($DataFlavor, flavor, getPropertyDataFlavor($nc(params)->get(0), transferFlavors));
		if (flavor != nullptr) {
			return true;
		}
	}
	return false;
}

int32_t TransferHandler::getSourceActions($JComponent* c) {
	$var($PropertyDescriptor, prop, getPropertyDescriptor(c));
	if (prop != nullptr) {
		return TransferHandler::COPY;
	}
	return TransferHandler::NONE;
}

$Icon* TransferHandler::getVisualRepresentation($Transferable* t) {
	return nullptr;
}

$Transferable* TransferHandler::createTransferable($JComponent* c) {
	$var($PropertyDescriptor, property, getPropertyDescriptor(c));
	if (property != nullptr) {
		return $new($TransferHandler$PropertyTransferable, property, c);
	}
	return nullptr;
}

void TransferHandler::exportDone($JComponent* source, $Transferable* data, int32_t action) {
}

$PropertyDescriptor* TransferHandler::getPropertyDescriptor($JComponent* comp) {
	$useLocalCurrentObjectStackCache();
	if (this->propertyName == nullptr) {
		return nullptr;
	}
	$Class* k = $nc($of(comp))->getClass();
	$var($BeanInfo, bi, nullptr);
	try {
		$assign(bi, $Introspector::getBeanInfo(k));
	} catch ($IntrospectionException& ex) {
		return nullptr;
	}
	$var($PropertyDescriptorArray, props, $nc(bi)->getPropertyDescriptors());
	for (int32_t i = 0; i < $nc(props)->length; ++i) {
		if ($nc(this->propertyName)->equals($($nc(props->get(i))->getName()))) {
			$var($Method, reader, $nc(props->get(i))->getReadMethod());
			if (reader != nullptr) {
				$var($ClassArray, params, reader->getParameterTypes());
				if (params == nullptr || $nc(params)->length == 0) {
					return props->get(i);
				}
			}
		}
	}
	return nullptr;
}

$DataFlavor* TransferHandler::getPropertyDataFlavor($Class* k, $DataFlavorArray* flavors) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(flavors)->length; ++i) {
		$var($DataFlavor, flavor, flavors->get(i));
		bool var$1 = "application"_s->equals($($nc(flavor)->getPrimaryType()));
		bool var$0 = var$1 && "x-java-jvm-local-objectref"_s->equals($($nc(flavor)->getSubType()));
		if (var$0 && $nc(k)->isAssignableFrom($nc(flavor)->getRepresentationClass())) {
			return flavor;
		}
	}
	return nullptr;
}

$DropTargetListener* TransferHandler::getDropTargetListener() {
	$init(TransferHandler);
	$useLocalCurrentObjectStackCache();
	$load($TransferHandler$DropHandler);
	$synchronized($TransferHandler$DropHandler::class$) {
		$var($TransferHandler$DropHandler, handler, $cast($TransferHandler$DropHandler, $nc($($AppContext::getAppContext()))->get($TransferHandler$DropHandler::class$)));
		if (handler == nullptr) {
			$assign(handler, $new($TransferHandler$DropHandler));
			$nc($($AppContext::getAppContext()))->put($TransferHandler$DropHandler::class$, handler);
		}
		return handler;
	}
}

void clinit$TransferHandler($Class* class$) {
	$assignStatic(TransferHandler::recognizer, nullptr);
	$assignStatic(TransferHandler::cutAction, $new($TransferHandler$TransferAction, "cut"_s));
	$assignStatic(TransferHandler::copyAction, $new($TransferHandler$TransferAction, "copy"_s));
	$assignStatic(TransferHandler::pasteAction, $new($TransferHandler$TransferAction, "paste"_s));
}

TransferHandler::TransferHandler() {
}

$Class* TransferHandler::load$($String* name, bool initialize) {
	$loadClass(TransferHandler, name, initialize, &_TransferHandler_ClassInfo_, clinit$TransferHandler, allocate$TransferHandler);
	return class$;
}

$Class* TransferHandler::class$ = nullptr;

	} // swing
} // javax