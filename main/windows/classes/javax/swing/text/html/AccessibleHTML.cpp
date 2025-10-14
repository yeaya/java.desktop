#include <javax/swing/text/html/AccessibleHTML.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/AccessibleHTML$DocumentHandler.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML$IconElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$PropertyChangeHandler.h>
#include <javax/swing/text/html/AccessibleHTML$RootHTMLAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$TextElementInfo.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <jcpp.h>

#undef CAPTION
#undef CONTENT
#undef IMG
#undef TABLE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $AccessibleHTML$DocumentHandler = ::javax::swing::text::html::AccessibleHTML$DocumentHandler;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$HTMLAccessibleContext = ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext;
using $AccessibleHTML$IconElementInfo = ::javax::swing::text::html::AccessibleHTML$IconElementInfo;
using $AccessibleHTML$PropertyChangeHandler = ::javax::swing::text::html::AccessibleHTML$PropertyChangeHandler;
using $AccessibleHTML$RootHTMLAccessibleContext = ::javax::swing::text::html::AccessibleHTML$RootHTMLAccessibleContext;
using $AccessibleHTML$TableElementInfo = ::javax::swing::text::html::AccessibleHTML$TableElementInfo;
using $AccessibleHTML$TextElementInfo = ::javax::swing::text::html::AccessibleHTML$TextElementInfo;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML_FieldInfo_[] = {
	{"editor", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE, $field(AccessibleHTML, editor)},
	{"model", "Ljavax/swing/text/Document;", nullptr, $PRIVATE, $field(AccessibleHTML, model)},
	{"docListener", "Ljavax/swing/event/DocumentListener;", nullptr, $PRIVATE, $field(AccessibleHTML, docListener)},
	{"propChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(AccessibleHTML, propChangeListener)},
	{"rootElementInfo", "Ljavax/swing/text/html/AccessibleHTML$ElementInfo;", nullptr, $PRIVATE, $field(AccessibleHTML, rootElementInfo)},
	{"rootHTMLAccessibleContext", "Ljavax/swing/text/html/AccessibleHTML$RootHTMLAccessibleContext;", nullptr, $PRIVATE, $field(AccessibleHTML, rootHTMLAccessibleContext)},
	{}
};

$MethodInfo _AccessibleHTML_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleHTML::*)($JEditorPane*)>(&AccessibleHTML::init$))},
	{"buildInfo", "()V", nullptr, $PRIVATE, $method(static_cast<void(AccessibleHTML::*)()>(&AccessibleHTML::buildInfo))},
	{"createElementInfo", "(Ljavax/swing/text/Element;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)Ljavax/swing/text/html/AccessibleHTML$ElementInfo;", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PRIVATE, $method(static_cast<$Document*(AccessibleHTML::*)()>(&AccessibleHTML::getDocument))},
	{"getRootEditorRect", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(AccessibleHTML::*)()>(&AccessibleHTML::getRootEditorRect))},
	{"getRootInfo", "()Ljavax/swing/text/html/AccessibleHTML$ElementInfo;", nullptr, $PRIVATE, $method(static_cast<$AccessibleHTML$ElementInfo*(AccessibleHTML::*)()>(&AccessibleHTML::getRootInfo))},
	{"getRootView", "()Ljavax/swing/text/View;", nullptr, $PRIVATE, $method(static_cast<$View*(AccessibleHTML::*)()>(&AccessibleHTML::getRootView))},
	{"getTextComponent", "()Ljavax/swing/JEditorPane;", nullptr, $PRIVATE, $method(static_cast<$JEditorPane*(AccessibleHTML::*)()>(&AccessibleHTML::getTextComponent))},
	{"lock", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(AccessibleHTML::*)()>(&AccessibleHTML::lock))},
	{"setDocument", "(Ljavax/swing/text/Document;)V", nullptr, $PRIVATE, $method(static_cast<void(AccessibleHTML::*)($Document*)>(&AccessibleHTML::setDocument))},
	{"unlock", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(AccessibleHTML::*)(Object$*)>(&AccessibleHTML::unlock))},
	{}
};

$InnerClassInfo _AccessibleHTML_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$PropertyChangeHandler", "javax.swing.text.html.AccessibleHTML", "PropertyChangeHandler", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$DocumentHandler", "javax.swing.text.html.AccessibleHTML", "DocumentHandler", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$ElementInfo", "javax.swing.text.html.AccessibleHTML", "ElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo", "javax.swing.text.html.AccessibleHTML", "TableElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$IconElementInfo", "javax.swing.text.html.AccessibleHTML", "IconElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$TextElementInfo", "javax.swing.text.html.AccessibleHTML", "TextElementInfo", 0},
	{"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext", "javax.swing.text.html.AccessibleHTML", "HTMLAccessibleContext", $PROTECTED | $ABSTRACT},
	{"javax.swing.text.html.AccessibleHTML$RootHTMLAccessibleContext", "javax.swing.text.html.AccessibleHTML", "RootHTMLAccessibleContext", $PRIVATE},
	{}
};

$ClassInfo _AccessibleHTML_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML",
	"java.lang.Object",
	"javax.accessibility.Accessible",
	_AccessibleHTML_FieldInfo_,
	_AccessibleHTML_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML$PropertyChangeHandler,javax.swing.text.html.AccessibleHTML$DocumentHandler,javax.swing.text.html.AccessibleHTML$ElementInfo,javax.swing.text.html.AccessibleHTML$TableElementInfo,javax.swing.text.html.AccessibleHTML$TableElementInfo$TableCellElementInfo,javax.swing.text.html.AccessibleHTML$TableElementInfo$TableRowElementInfo,javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext,javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable,javax.swing.text.html.AccessibleHTML$IconElementInfo,javax.swing.text.html.AccessibleHTML$IconElementInfo$IconAccessibleContext,javax.swing.text.html.AccessibleHTML$TextElementInfo,javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext,javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment,javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext,javax.swing.text.html.AccessibleHTML$RootHTMLAccessibleContext"
};

$Object* allocate$AccessibleHTML($Class* clazz) {
	return $of($alloc(AccessibleHTML));
}

void AccessibleHTML::init$($JEditorPane* pane) {
	$set(this, editor, pane);
	$set(this, propChangeListener, $new($AccessibleHTML$PropertyChangeHandler, this));
	setDocument($($nc(this->editor)->getDocument()));
	$set(this, docListener, $new($AccessibleHTML$DocumentHandler, this));
}

void AccessibleHTML::setDocument($Document* document) {
	if (this->model != nullptr) {
		$nc(this->model)->removeDocumentListener(this->docListener);
	}
	if (this->editor != nullptr) {
		$nc(this->editor)->removePropertyChangeListener(this->propChangeListener);
	}
	$set(this, model, document);
	if (this->model != nullptr) {
		if (this->rootElementInfo != nullptr) {
			$nc(this->rootElementInfo)->invalidate(false);
		}
		buildInfo();
		$nc(this->model)->addDocumentListener(this->docListener);
	} else {
		$set(this, rootElementInfo, nullptr);
	}
	if (this->editor != nullptr) {
		$nc(this->editor)->addPropertyChangeListener(this->propChangeListener);
	}
}

$Document* AccessibleHTML::getDocument() {
	return this->model;
}

$JEditorPane* AccessibleHTML::getTextComponent() {
	return this->editor;
}

$AccessibleHTML$ElementInfo* AccessibleHTML::getRootInfo() {
	return this->rootElementInfo;
}

$View* AccessibleHTML::getRootView() {
	return $nc($($cast($TextUI, $nc($(getTextComponent()))->getUI())))->getRootView($(getTextComponent()));
}

$Rectangle* AccessibleHTML::getRootEditorRect() {
	$var($Rectangle, alloc, $nc($(getTextComponent()))->getBounds());
	if (($nc(alloc)->width > 0) && (alloc->height > 0)) {
		alloc->x = (alloc->y = 0);
		$var($Insets, insets, $nc(this->editor)->getInsets());
		alloc->x += $nc(insets)->left;
		alloc->y += insets->top;
		alloc->width -= insets->left + insets->right;
		alloc->height -= insets->top + insets->bottom;
		return alloc;
	}
	return nullptr;
}

$Object* AccessibleHTML::lock() {
	$var($Document, document, getDocument());
	if ($instanceOf($AbstractDocument, document)) {
		$nc(($cast($AbstractDocument, document)))->readLock();
		return $of(document);
	}
	return $of(nullptr);
}

void AccessibleHTML::unlock(Object$* key) {
	if (key != nullptr) {
		$nc(($cast($AbstractDocument, key)))->readUnlock();
	}
}

void AccessibleHTML::buildInfo() {
	$var($Object, lock, this->lock());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Document, doc, getDocument());
			$var($Element, root, $nc(doc)->getDefaultRootElement());
			$set(this, rootElementInfo, $new($AccessibleHTML$ElementInfo, this, root));
			$nc(this->rootElementInfo)->validate();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			unlock(lock);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$AccessibleHTML$ElementInfo* AccessibleHTML::createElementInfo($Element* e, $AccessibleHTML$ElementInfo* parent) {
	$var($AttributeSet, attrs, $nc(e)->getAttributes());
	if (attrs != nullptr) {
		$init($StyleConstants);
		$var($Object, name, attrs->getAttribute($StyleConstants::NameAttribute));
		$init($HTML$Tag);
		if ($equals(name, $HTML$Tag::IMG)) {
			return $new($AccessibleHTML$IconElementInfo, this, e, parent);
		} else {
			if ($equals(name, $HTML$Tag::CONTENT) || $equals(name, $HTML$Tag::CAPTION)) {
				return $new($AccessibleHTML$TextElementInfo, this, e, parent);
			} else {
				if ($equals(name, $HTML$Tag::TABLE)) {
					return $new($AccessibleHTML$TableElementInfo, this, e, parent);
				}
			}
		}
	}
	return nullptr;
}

$AccessibleContext* AccessibleHTML::getAccessibleContext() {
	if (this->rootHTMLAccessibleContext == nullptr) {
		$set(this, rootHTMLAccessibleContext, $new($AccessibleHTML$RootHTMLAccessibleContext, this, this->rootElementInfo));
	}
	return this->rootHTMLAccessibleContext;
}

AccessibleHTML::AccessibleHTML() {
}

$Class* AccessibleHTML::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML, name, initialize, &_AccessibleHTML_ClassInfo_, allocate$AccessibleHTML);
	return class$;
}

$Class* AccessibleHTML::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax