#include <javax/swing/text/html/HTML$UnknownTag.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTML.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTML = ::javax::swing::text::html::HTML;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _HTML$UnknownTag_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HTML$UnknownTag::*)($String*)>(&HTML$UnknownTag::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(HTML$UnknownTag::*)($ObjectInputStream*)>(&HTML$UnknownTag::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(HTML$UnknownTag::*)($ObjectOutputStream*)>(&HTML$UnknownTag::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _HTML$UnknownTag_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTML$UnknownTag", "javax.swing.text.html.HTML", "UnknownTag", $PUBLIC | $STATIC},
	{"javax.swing.text.html.HTML$Tag", "javax.swing.text.html.HTML", "Tag", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HTML$UnknownTag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTML$UnknownTag",
	"javax.swing.text.html.HTML$Tag",
	"java.io.Serializable",
	nullptr,
	_HTML$UnknownTag_MethodInfo_,
	nullptr,
	nullptr,
	_HTML$UnknownTag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTML"
};

$Object* allocate$HTML$UnknownTag($Class* clazz) {
	return $of($alloc(HTML$UnknownTag));
}

$String* HTML$UnknownTag::toString() {
	 return this->$HTML$Tag::toString();
}

$Object* HTML$UnknownTag::clone() {
	 return this->$HTML$Tag::clone();
}

void HTML$UnknownTag::finalize() {
	this->$HTML$Tag::finalize();
}

void HTML$UnknownTag::init$($String* id) {
	$HTML$Tag::init$(id);
}

int32_t HTML$UnknownTag::hashCode() {
	return $nc($(toString()))->hashCode();
}

bool HTML$UnknownTag::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(HTML$UnknownTag, obj)) {
		return $nc($(toString()))->equals($($nc($of(obj))->toString()));
	}
	return false;
}

void HTML$UnknownTag::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeBoolean(this->blockTag);
	s->writeBoolean(this->breakTag);
	s->writeBoolean(this->unknown);
	s->writeObject(this->name);
}

void HTML$UnknownTag::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	this->blockTag = s->readBoolean();
	this->breakTag = s->readBoolean();
	this->unknown = s->readBoolean();
	$set(this, name, $cast($String, s->readObject()));
}

HTML$UnknownTag::HTML$UnknownTag() {
}

$Class* HTML$UnknownTag::load$($String* name, bool initialize) {
	$loadClass(HTML$UnknownTag, name, initialize, &_HTML$UnknownTag_ClassInfo_, allocate$HTML$UnknownTag);
	return class$;
}

$Class* HTML$UnknownTag::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax