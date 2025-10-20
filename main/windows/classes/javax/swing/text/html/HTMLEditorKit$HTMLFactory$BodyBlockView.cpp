#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory$BodyBlockView.h>

#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/BlockView.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef X_AXIS
#undef Y_AXIS

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JViewport = ::javax::swing::JViewport;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $BlockView = ::javax::swing::text::html::BlockView;
using $HTMLEditorKit$HTMLFactory = ::javax::swing::text::html::HTMLEditorKit$HTMLFactory;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLEditorKit$HTMLFactory$BodyBlockView_FieldInfo_[] = {
	{"cachedViewPort", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Ljavax/swing/JViewport;>;", $PRIVATE, $field(HTMLEditorKit$HTMLFactory$BodyBlockView, cachedViewPort)},
	{"isListening", "Z", nullptr, $PRIVATE, $field(HTMLEditorKit$HTMLFactory$BodyBlockView, isListening)},
	{"viewVisibleWidth", "I", nullptr, $PRIVATE, $field(HTMLEditorKit$HTMLFactory$BodyBlockView, viewVisibleWidth)},
	{"componentVisibleWidth", "I", nullptr, $PRIVATE, $field(HTMLEditorKit$HTMLFactory$BodyBlockView, componentVisibleWidth)},
	{}
};

$MethodInfo _HTMLEditorKit$HTMLFactory$BodyBlockView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLEditorKit$HTMLFactory$BodyBlockView::*)($Element*)>(&HTMLEditorKit$HTMLFactory$BodyBlockView::init$))},
	{"calculateMajorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"layoutMinorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLEditorKit$HTMLFactory$BodyBlockView_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$HTMLFactory", "javax.swing.text.html.HTMLEditorKit", "HTMLFactory", $PUBLIC | $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$HTMLFactory$BodyBlockView", "javax.swing.text.html.HTMLEditorKit$HTMLFactory", "BodyBlockView", $STATIC},
	{}
};

$ClassInfo _HTMLEditorKit$HTMLFactory$BodyBlockView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit$HTMLFactory$BodyBlockView",
	"javax.swing.text.html.BlockView",
	"java.awt.event.ComponentListener",
	_HTMLEditorKit$HTMLFactory$BodyBlockView_FieldInfo_,
	_HTMLEditorKit$HTMLFactory$BodyBlockView_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$HTMLFactory$BodyBlockView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$HTMLFactory$BodyBlockView($Class* clazz) {
	return $of($alloc(HTMLEditorKit$HTMLFactory$BodyBlockView));
}

int32_t HTMLEditorKit$HTMLFactory$BodyBlockView::hashCode() {
	 return this->$BlockView::hashCode();
}

bool HTMLEditorKit$HTMLFactory$BodyBlockView::equals(Object$* arg0) {
	 return this->$BlockView::equals(arg0);
}

$Object* HTMLEditorKit$HTMLFactory$BodyBlockView::clone() {
	 return this->$BlockView::clone();
}

$String* HTMLEditorKit$HTMLFactory$BodyBlockView::toString() {
	 return this->$BlockView::toString();
}

void HTMLEditorKit$HTMLFactory$BodyBlockView::finalize() {
	this->$BlockView::finalize();
}

void HTMLEditorKit$HTMLFactory$BodyBlockView::init$($Element* elem) {
	$BlockView::init$(elem, $View::Y_AXIS);
	$set(this, cachedViewPort, nullptr);
	this->isListening = false;
	this->viewVisibleWidth = $Integer::MAX_VALUE;
	this->componentVisibleWidth = $Integer::MAX_VALUE;
}

$SizeRequirements* HTMLEditorKit$HTMLFactory$BodyBlockView::calculateMajorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$var($SizeRequirements, r, r$renamed);
	$assign(r, $BlockView::calculateMajorAxisRequirements(axis, r));
	$nc(r)->maximum = $Integer::MAX_VALUE;
	return r;
}

void HTMLEditorKit$HTMLFactory$BodyBlockView::layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalCurrentObjectStackCache();
	$var($Container, container, getContainer());
	$var($Container, parentContainer, nullptr);
	if (container != nullptr && ($instanceOf($JEditorPane, container)) && ($assign(parentContainer, container->getParent())) != nullptr && ($instanceOf($JViewport, parentContainer))) {
		$var($JViewport, viewPort, $cast($JViewport, parentContainer));
		if (this->cachedViewPort != nullptr) {
			$var($JViewport, cachedObject, $cast($JViewport, $nc(this->cachedViewPort)->get()));
			if (cachedObject != nullptr) {
				if (cachedObject != viewPort) {
					cachedObject->removeComponentListener(this);
				}
			} else {
				$set(this, cachedViewPort, nullptr);
			}
		}
		if (this->cachedViewPort == nullptr) {
			$nc(viewPort)->addComponentListener(this);
			$set(this, cachedViewPort, $new($WeakReference, viewPort));
		}
		this->componentVisibleWidth = $nc($($nc(viewPort)->getExtentSize()))->width;
		if (this->componentVisibleWidth > 0) {
			$var($Insets, insets, container->getInsets());
			this->viewVisibleWidth = this->componentVisibleWidth - $nc(insets)->left - getLeftInset();
			targetSpan = $Math::min(targetSpan, this->viewVisibleWidth);
		}
	} else if (this->cachedViewPort != nullptr) {
		$var($JViewport, cachedObject, $cast($JViewport, $nc(this->cachedViewPort)->get()));
		if (cachedObject != nullptr) {
			cachedObject->removeComponentListener(this);
		}
		$set(this, cachedViewPort, nullptr);
	}
	$BlockView::layoutMinorAxis(targetSpan, axis, offsets, spans);
}

void HTMLEditorKit$HTMLFactory$BodyBlockView::setParent($View* parent) {
	if (parent == nullptr) {
		if (this->cachedViewPort != nullptr) {
			$var($Object, cachedObject, nullptr);
			if (($assign(cachedObject, $nc(this->cachedViewPort)->get())) != nullptr) {
				$nc(($cast($JComponent, cachedObject)))->removeComponentListener(this);
			}
			$set(this, cachedViewPort, nullptr);
		}
	}
	$BlockView::setParent(parent);
}

void HTMLEditorKit$HTMLFactory$BodyBlockView::componentResized($ComponentEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JViewport, $($nc(e)->getSource())))) {
		return;
	}
	$var($JViewport, viewPort, $cast($JViewport, $nc(e)->getSource()));
	if (this->componentVisibleWidth != $nc($($nc(viewPort)->getExtentSize()))->width) {
		$var($Document, doc, getDocument());
		if ($instanceOf($AbstractDocument, doc)) {
			$var($AbstractDocument, document, $cast($AbstractDocument, getDocument()));
			$nc(document)->readLock();
			{
				$var($Throwable, var$0, nullptr);
				try {
					layoutChanged($View::X_AXIS);
					preferenceChanged(nullptr, true, true);
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					document->readUnlock();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void HTMLEditorKit$HTMLFactory$BodyBlockView::componentHidden($ComponentEvent* e) {
}

void HTMLEditorKit$HTMLFactory$BodyBlockView::componentMoved($ComponentEvent* e) {
}

void HTMLEditorKit$HTMLFactory$BodyBlockView::componentShown($ComponentEvent* e) {
}

HTMLEditorKit$HTMLFactory$BodyBlockView::HTMLEditorKit$HTMLFactory$BodyBlockView() {
}

$Class* HTMLEditorKit$HTMLFactory$BodyBlockView::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$HTMLFactory$BodyBlockView, name, initialize, &_HTMLEditorKit$HTMLFactory$BodyBlockView_ClassInfo_, allocate$HTMLEditorKit$HTMLFactory$BodyBlockView);
	return class$;
}

$Class* HTMLEditorKit$HTMLFactory$BodyBlockView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax