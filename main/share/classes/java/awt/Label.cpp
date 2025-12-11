#include <java/awt/Label.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Label$AccessibleAWTLabel.h>
#include <java/awt/Toolkit.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/LabelPeer.h>
#include <java/io/ObjectInputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef CENTER
#undef LEFT
#undef RIGHT

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Label$AccessibleAWTLabel = ::java::awt::Label$AccessibleAWTLabel;
using $Toolkit = ::java::awt::Toolkit;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $LabelPeer = ::java::awt::peer::LabelPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$FieldInfo _Label_FieldInfo_[] = {
	{"LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Label, LEFT)},
	{"CENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Label, CENTER)},
	{"RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Label, RIGHT)},
	{"text", "Ljava/lang/String;", nullptr, 0, $field(Label, text)},
	{"alignment", "I", nullptr, 0, $field(Label, alignment)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Label, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Label, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Label, serialVersionUID)},
	{}
};

$MethodInfo _Label_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Label::*)()>(&Label::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Label::*)($String*)>(&Label::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(Label::*)($String*,int32_t)>(&Label::init$)), "java.awt.HeadlessException"},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getAlignment", "()I", nullptr, $PUBLIC},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Label::initIDs))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Label::*)($ObjectInputStream*)>(&Label::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"setAlignment", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 12

$InnerClassInfo _Label_InnerClassesInfo_[] = {
	{"java.awt.Label$AccessibleAWTLabel", "java.awt.Label", "AccessibleAWTLabel", $PROTECTED},
	{}
};

$ClassInfo _Label_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Label",
	"java.awt.Component",
	"javax.accessibility.Accessible",
	_Label_FieldInfo_,
	_Label_MethodInfo_,
	nullptr,
	nullptr,
	_Label_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Label$AccessibleAWTLabel"
};

$Object* allocate$Label($Class* clazz) {
	return $of($alloc(Label));
}

$String* Label::toString() {
	 return this->$Component::toString();
}

int32_t Label::hashCode() {
	 return this->$Component::hashCode();
}

bool Label::equals(Object$* arg0) {
	 return this->$Component::equals(arg0);
}

$Object* Label::clone() {
	 return this->$Component::clone();
}

void Label::finalize() {
	this->$Component::finalize();
}

$String* Label::base = nullptr;
int32_t Label::nameCounter = 0;

void Label::init$() {
	Label::init$(""_s, Label::LEFT);
}

void Label::init$($String* text) {
	Label::init$(text, Label::LEFT);
}

void Label::init$($String* text, int32_t alignment) {
	$Component::init$();
	this->alignment = Label::LEFT;
	$GraphicsEnvironment::checkHeadless();
	$set(this, text, text);
	setAlignment(alignment);
}

void Label::readObject($ObjectInputStream* s) {
	$GraphicsEnvironment::checkHeadless();
	$nc(s)->defaultReadObject();
}

$String* Label::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(Label::class$) {
		$var($String, var$0, Label::base);
		return $concat(var$0, $$str(Label::nameCounter++));
	}
}

void Label::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createLabel(this));
		}
		$Component::addNotify();
	}
}

int32_t Label::getAlignment() {
	return this->alignment;
}

void Label::setAlignment(int32_t alignment) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		{
			$var($LabelPeer, peer, nullptr)
			switch (alignment) {
			case Label::LEFT:
				{}
			case Label::CENTER:
				{}
			case Label::RIGHT:
				{
					this->alignment = alignment;
					$assign(peer, $cast($LabelPeer, this->peer));
					if (peer != nullptr) {
						peer->setAlignment(alignment);
					}
					return;
				}
			}
		}
		$throwNew($IllegalArgumentException, $$str({"improper alignment: "_s, $$str(alignment)}));
	}
}

$String* Label::getText() {
	return this->text;
}

void Label::setText($String* text) {
	bool testvalid = false;
	$synchronized(this) {
		if (text != this->text && (this->text == nullptr || !$nc(this->text)->equals(text))) {
			$set(this, text, text);
			$var($LabelPeer, peer, $cast($LabelPeer, this->peer));
			if (peer != nullptr) {
				peer->setText(text);
			}
			testvalid = true;
		}
	}
	if (testvalid) {
		invalidateIfValid();
	}
}

$String* Label::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, align, ""_s);
	switch (this->alignment) {
	case Label::LEFT:
		{
			$assign(align, "left"_s);
			break;
		}
	case Label::CENTER:
		{
			$assign(align, "center"_s);
			break;
		}
	case Label::RIGHT:
		{
			$assign(align, "right"_s);
			break;
		}
	}
	return $str({$($Component::paramString()), ",align="_s, align, ",text="_s, this->text});
}

void Label::initIDs() {
	$init(Label);
	$prepareNativeStatic(Label, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$AccessibleContext* Label::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Label$AccessibleAWTLabel, this));
	}
	return this->accessibleContext;
}

void clinit$Label($Class* class$) {
	$assignStatic(Label::base, "label"_s);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Label::initIDs();
		}
	}
	Label::nameCounter = 0;
}

Label::Label() {
}

$Class* Label::load$($String* name, bool initialize) {
	$loadClass(Label, name, initialize, &_Label_ClassInfo_, clinit$Label, allocate$Label);
	return class$;
}

$Class* Label::class$ = nullptr;

	} // awt
} // java