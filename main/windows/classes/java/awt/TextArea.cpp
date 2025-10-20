#include <java/awt/TextArea.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/TextArea$AccessibleAWTTextArea.h>
#include <java/awt/TextComponent$AccessibleAWTTextComponent.h>
#include <java/awt/TextComponent.h>
#include <java/awt/Toolkit.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/TextAreaPeer.h>
#include <java/awt/peer/TextComponentPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef BACKWARD_TRAVERSAL_KEYS
#undef FORWARD_TRAVERSAL_KEYS
#undef SCROLLBARS_BOTH
#undef SCROLLBARS_HORIZONTAL_ONLY
#undef SCROLLBARS_NONE
#undef SCROLLBARS_VERTICAL_ONLY

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Dimension = ::java::awt::Dimension;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $TextArea$AccessibleAWTTextArea = ::java::awt::TextArea$AccessibleAWTTextArea;
using $TextComponent = ::java::awt::TextComponent;
using $TextComponent$AccessibleAWTTextComponent = ::java::awt::TextComponent$AccessibleAWTTextComponent;
using $Toolkit = ::java::awt::Toolkit;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $TextAreaPeer = ::java::awt::peer::TextAreaPeer;
using $TextComponentPeer = ::java::awt::peer::TextComponentPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$CompoundAttribute _TextArea_MethodAnnotations_appendText7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TextArea_MethodAnnotations_insertText19[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TextArea_MethodAnnotations_minimumSize20[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TextArea_MethodAnnotations_minimumSize21[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TextArea_MethodAnnotations_preferredSize23[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TextArea_MethodAnnotations_preferredSize24[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TextArea_MethodAnnotations_replaceText27[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _TextArea_FieldInfo_[] = {
	{"rows", "I", nullptr, 0, $field(TextArea, rows)},
	{"columns", "I", nullptr, 0, $field(TextArea, columns)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextArea, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(TextArea, nameCounter)},
	{"SCROLLBARS_BOTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextArea, SCROLLBARS_BOTH)},
	{"SCROLLBARS_VERTICAL_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextArea, SCROLLBARS_VERTICAL_ONLY)},
	{"SCROLLBARS_HORIZONTAL_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextArea, SCROLLBARS_HORIZONTAL_ONLY)},
	{"SCROLLBARS_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextArea, SCROLLBARS_NONE)},
	{"scrollbarVisibility", "I", nullptr, $PRIVATE, $field(TextArea, scrollbarVisibility)},
	{"forwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $PRIVATE | $STATIC, $staticField(TextArea, forwardTraversalKeys)},
	{"backwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $PRIVATE | $STATIC, $staticField(TextArea, backwardTraversalKeys)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextArea, serialVersionUID)},
	{"textAreaSerializedDataVersion", "I", nullptr, $PRIVATE, $field(TextArea, textAreaSerializedDataVersion)},
	{}
};

$MethodInfo _TextArea_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextArea::*)()>(&TextArea::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TextArea::*)($String*)>(&TextArea::init$)), "java.awt.HeadlessException"},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(TextArea::*)(int32_t,int32_t)>(&TextArea::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(TextArea::*)($String*,int32_t,int32_t)>(&TextArea::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;III)V", nullptr, $PUBLIC, $method(static_cast<void(TextArea::*)($String*,int32_t,int32_t,int32_t)>(&TextArea::init$)), "java.awt.HeadlessException"},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"append", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"appendText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _TextArea_MethodAnnotations_appendText7},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getColumns", "()I", nullptr, $PUBLIC},
	{"getMinimumSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRows", "()I", nullptr, $PUBLIC},
	{"getScrollbarVisibility", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&TextArea::initIDs))},
	{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"insertText", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _TextArea_MethodAnnotations_insertText19},
	{"minimumSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TextArea_MethodAnnotations_minimumSize20},
	{"minimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TextArea_MethodAnnotations_minimumSize21},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"preferredSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TextArea_MethodAnnotations_preferredSize23},
	{"preferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TextArea_MethodAnnotations_preferredSize24},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(TextArea::*)($ObjectInputStream*)>(&TextArea::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"replaceRange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"replaceText", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _TextArea_MethodAnnotations_replaceText27},
	{"setColumns", "(I)V", nullptr, $PUBLIC},
	{"setRows", "(I)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 17

$InnerClassInfo _TextArea_InnerClassesInfo_[] = {
	{"java.awt.TextArea$AccessibleAWTTextArea", "java.awt.TextArea", "AccessibleAWTTextArea", $PROTECTED},
	{}
};

$ClassInfo _TextArea_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.TextArea",
	"java.awt.TextComponent",
	nullptr,
	_TextArea_FieldInfo_,
	_TextArea_MethodInfo_,
	nullptr,
	nullptr,
	_TextArea_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.TextArea$AccessibleAWTTextArea"
};

$Object* allocate$TextArea($Class* clazz) {
	return $of($alloc(TextArea));
}

$String* TextArea::base = nullptr;
int32_t TextArea::nameCounter = 0;

$Set* TextArea::forwardTraversalKeys = nullptr;

$Set* TextArea::backwardTraversalKeys = nullptr;

void TextArea::initIDs() {
	$init(TextArea);
	$prepareNativeStatic(TextArea, initIDs, void);
	$invokeNativeStatic(TextArea, initIDs);
	$finishNativeStatic();
}

void TextArea::init$() {
	TextArea::init$(""_s, 0, 0, TextArea::SCROLLBARS_BOTH);
}

void TextArea::init$($String* text) {
	TextArea::init$(text, 0, 0, TextArea::SCROLLBARS_BOTH);
}

void TextArea::init$(int32_t rows, int32_t columns) {
	TextArea::init$(""_s, rows, columns, TextArea::SCROLLBARS_BOTH);
}

void TextArea::init$($String* text, int32_t rows, int32_t columns) {
	TextArea::init$(text, rows, columns, TextArea::SCROLLBARS_BOTH);
}

void TextArea::init$($String* text, int32_t rows, int32_t columns, int32_t scrollbars) {
	$TextComponent::init$(text);
	this->textAreaSerializedDataVersion = 2;
	this->rows = (rows >= 0) ? rows : 0;
	this->columns = (columns >= 0) ? columns : 0;
	if (scrollbars >= TextArea::SCROLLBARS_BOTH && scrollbars <= TextArea::SCROLLBARS_NONE) {
		this->scrollbarVisibility = scrollbars;
	} else {
		this->scrollbarVisibility = TextArea::SCROLLBARS_BOTH;
	}
	setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, TextArea::forwardTraversalKeys);
	setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, TextArea::backwardTraversalKeys);
}

$String* TextArea::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(TextArea::class$) {
		$var($String, var$0, TextArea::base);
		return $concat(var$0, $$str(TextArea::nameCounter++));
	}
}

void TextArea::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createTextArea(this));
		}
		$TextComponent::addNotify();
	}
}

void TextArea::insert($String* str, int32_t pos) {
	insertText(str, pos);
}

void TextArea::insertText($String* str, int32_t pos) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($TextAreaPeer, peer, $cast($TextAreaPeer, this->peer));
		if (peer != nullptr) {
			peer->insert(str, pos);
		}
		$var($String, var$0, $$str({$($nc(this->text)->substring(0, pos)), str}));
		$set(this, text, $concat(var$0, $($nc(this->text)->substring(pos))));
	}
}

void TextArea::append($String* str) {
	appendText(str);
}

void TextArea::appendText($String* str) {
	$synchronized(this) {
		insertText(str, $nc($(getText()))->length());
	}
}

void TextArea::replaceRange($String* str, int32_t start, int32_t end) {
	replaceText(str, start, end);
}

void TextArea::replaceText($String* str, int32_t start, int32_t end) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($TextAreaPeer, peer, $cast($TextAreaPeer, this->peer));
		if (peer != nullptr) {
			peer->replaceRange(str, start, end);
		}
		$var($String, var$0, $$str({$($nc(this->text)->substring(0, start)), str}));
		$set(this, text, $concat(var$0, $($nc(this->text)->substring(end))));
	}
}

int32_t TextArea::getRows() {
	return this->rows;
}

void TextArea::setRows(int32_t rows) {
	int32_t oldVal = this->rows;
	if (rows < 0) {
		$throwNew($IllegalArgumentException, "rows less than zero."_s);
	}
	if (rows != oldVal) {
		this->rows = rows;
		invalidate();
	}
}

int32_t TextArea::getColumns() {
	return this->columns;
}

void TextArea::setColumns(int32_t columns) {
	int32_t oldVal = this->columns;
	if (columns < 0) {
		$throwNew($IllegalArgumentException, "columns less than zero."_s);
	}
	if (columns != oldVal) {
		this->columns = columns;
		invalidate();
	}
}

int32_t TextArea::getScrollbarVisibility() {
	return this->scrollbarVisibility;
}

$Dimension* TextArea::getPreferredSize(int32_t rows, int32_t columns) {
	return preferredSize(rows, columns);
}

$Dimension* TextArea::preferredSize(int32_t rows, int32_t columns) {
	$synchronized(getTreeLock()) {
		$var($TextAreaPeer, peer, $cast($TextAreaPeer, this->peer));
		return (peer != nullptr) ? $nc(peer)->getPreferredSize(rows, columns) : $TextComponent::preferredSize();
	}
}

$Dimension* TextArea::getPreferredSize() {
	return preferredSize();
}

$Dimension* TextArea::preferredSize() {
	$synchronized(getTreeLock()) {
		return ((this->rows > 0) && (this->columns > 0)) ? preferredSize(this->rows, this->columns) : $TextComponent::preferredSize();
	}
}

$Dimension* TextArea::getMinimumSize(int32_t rows, int32_t columns) {
	return minimumSize(rows, columns);
}

$Dimension* TextArea::minimumSize(int32_t rows, int32_t columns) {
	$synchronized(getTreeLock()) {
		$var($TextAreaPeer, peer, $cast($TextAreaPeer, this->peer));
		return (peer != nullptr) ? $nc(peer)->getMinimumSize(rows, columns) : $TextComponent::minimumSize();
	}
}

$Dimension* TextArea::getMinimumSize() {
	return minimumSize();
}

$Dimension* TextArea::minimumSize() {
	$synchronized(getTreeLock()) {
		return ((this->rows > 0) && (this->columns > 0)) ? minimumSize(this->rows, this->columns) : $TextComponent::minimumSize();
	}
}

$String* TextArea::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, sbVisStr, nullptr);
	switch (this->scrollbarVisibility) {
	case TextArea::SCROLLBARS_BOTH:
		{
			$assign(sbVisStr, "both"_s);
			break;
		}
	case TextArea::SCROLLBARS_VERTICAL_ONLY:
		{
			$assign(sbVisStr, "vertical-only"_s);
			break;
		}
	case TextArea::SCROLLBARS_HORIZONTAL_ONLY:
		{
			$assign(sbVisStr, "horizontal-only"_s);
			break;
		}
	case TextArea::SCROLLBARS_NONE:
		{
			$assign(sbVisStr, "none"_s);
			break;
		}
	default:
		{
			$assign(sbVisStr, "invalid display policy"_s);
		}
	}
	return $str({$($TextComponent::paramString()), ",rows="_s, $$str(this->rows), ",columns="_s, $$str(this->columns), ",scrollbarVisibility="_s, sbVisStr});
}

void TextArea::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->columns < 0) {
		this->columns = 0;
	}
	if (this->rows < 0) {
		this->rows = 0;
	}
	if ((this->scrollbarVisibility < TextArea::SCROLLBARS_BOTH) || (this->scrollbarVisibility > TextArea::SCROLLBARS_NONE)) {
		this->scrollbarVisibility = TextArea::SCROLLBARS_BOTH;
	}
	if (this->textAreaSerializedDataVersion < 2) {
		setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, TextArea::forwardTraversalKeys);
		setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, TextArea::backwardTraversalKeys);
	}
}

$AccessibleContext* TextArea::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($TextArea$AccessibleAWTTextArea, this));
	}
	return this->accessibleContext;
}

void clinit$TextArea($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(TextArea::base, "text"_s);
	TextArea::nameCounter = 0;
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			TextArea::initIDs();
		}
		$assignStatic(TextArea::forwardTraversalKeys, $KeyboardFocusManager::initFocusTraversalKeysSet("ctrl TAB"_s, $$new($HashSet)));
		$assignStatic(TextArea::backwardTraversalKeys, $KeyboardFocusManager::initFocusTraversalKeysSet("ctrl shift TAB"_s, $$new($HashSet)));
	}
}

TextArea::TextArea() {
}

$Class* TextArea::load$($String* name, bool initialize) {
	$loadClass(TextArea, name, initialize, &_TextArea_ClassInfo_, clinit$TextArea, allocate$TextArea);
	return class$;
}

$Class* TextArea::class$ = nullptr;

	} // awt
} // java