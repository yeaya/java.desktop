#include <javax/swing/text/html/StyleSheet$SearchBuffer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EmptyStackException.h>
#include <java/util/Hashtable.h>
#include <java/util/Stack.h>
#include <java/util/Vector.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $EmptyStackException = ::java::util::EmptyStackException;
using $Hashtable = ::java::util::Hashtable;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet$SearchBuffer_FieldInfo_[] = {
	{"searchBuffers", "Ljava/util/Stack;", "Ljava/util/Stack<Ljavax/swing/text/html/StyleSheet$SearchBuffer;>;", $STATIC, $staticField(StyleSheet$SearchBuffer, searchBuffers)},
	{"vector", "Ljava/util/Vector;", nullptr, 0, $field(StyleSheet$SearchBuffer, vector)},
	{"stringBuffer", "Ljava/lang/StringBuffer;", nullptr, 0, $field(StyleSheet$SearchBuffer, stringBuffer)},
	{"hashtable", "Ljava/util/Hashtable;", nullptr, 0, $field(StyleSheet$SearchBuffer, hashtable)},
	{}
};

$MethodInfo _StyleSheet$SearchBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StyleSheet$SearchBuffer::*)()>(&StyleSheet$SearchBuffer::init$))},
	{"empty", "()V", nullptr, 0},
	{"getHashtable", "()Ljava/util/Hashtable;", nullptr, 0},
	{"getStringBuffer", "()Ljava/lang/StringBuffer;", nullptr, 0},
	{"getVector", "()Ljava/util/Vector;", nullptr, 0},
	{"obtainSearchBuffer", "()Ljavax/swing/text/html/StyleSheet$SearchBuffer;", nullptr, $STATIC, $method(static_cast<StyleSheet$SearchBuffer*(*)()>(&StyleSheet$SearchBuffer::obtainSearchBuffer))},
	{"releaseSearchBuffer", "(Ljavax/swing/text/html/StyleSheet$SearchBuffer;)V", nullptr, $STATIC, $method(static_cast<void(*)(StyleSheet$SearchBuffer*)>(&StyleSheet$SearchBuffer::releaseSearchBuffer))},
	{}
};

$InnerClassInfo _StyleSheet$SearchBuffer_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$SearchBuffer", "javax.swing.text.html.StyleSheet", "SearchBuffer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StyleSheet$SearchBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.StyleSheet$SearchBuffer",
	"java.lang.Object",
	nullptr,
	_StyleSheet$SearchBuffer_FieldInfo_,
	_StyleSheet$SearchBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_StyleSheet$SearchBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet"
};

$Object* allocate$StyleSheet$SearchBuffer($Class* clazz) {
	return $of($alloc(StyleSheet$SearchBuffer));
}


$Stack* StyleSheet$SearchBuffer::searchBuffers = nullptr;

void StyleSheet$SearchBuffer::init$() {
	$set(this, vector, nullptr);
	$set(this, stringBuffer, nullptr);
	$set(this, hashtable, nullptr);
}

StyleSheet$SearchBuffer* StyleSheet$SearchBuffer::obtainSearchBuffer() {
	$init(StyleSheet$SearchBuffer);
	$useLocalCurrentObjectStackCache();
	$var(StyleSheet$SearchBuffer, sb, nullptr);
	try {
		if (!$nc(StyleSheet$SearchBuffer::searchBuffers)->empty()) {
			$assign(sb, $cast(StyleSheet$SearchBuffer, $nc(StyleSheet$SearchBuffer::searchBuffers)->pop()));
		} else {
			$assign(sb, $new(StyleSheet$SearchBuffer));
		}
	} catch ($EmptyStackException&) {
		$var($EmptyStackException, ese, $catch());
		$assign(sb, $new(StyleSheet$SearchBuffer));
	}
	return sb;
}

void StyleSheet$SearchBuffer::releaseSearchBuffer(StyleSheet$SearchBuffer* sb) {
	$init(StyleSheet$SearchBuffer);
	$nc(sb)->empty();
	$nc(StyleSheet$SearchBuffer::searchBuffers)->push(sb);
}

$StringBuffer* StyleSheet$SearchBuffer::getStringBuffer() {
	if (this->stringBuffer == nullptr) {
		$set(this, stringBuffer, $new($StringBuffer));
	}
	return this->stringBuffer;
}

$Vector* StyleSheet$SearchBuffer::getVector() {
	if (this->vector == nullptr) {
		$set(this, vector, $new($Vector));
	}
	return this->vector;
}

$Hashtable* StyleSheet$SearchBuffer::getHashtable() {
	if (this->hashtable == nullptr) {
		$set(this, hashtable, $new($Hashtable));
	}
	return this->hashtable;
}

void StyleSheet$SearchBuffer::empty() {
	if (this->stringBuffer != nullptr) {
		$nc(this->stringBuffer)->setLength(0);
	}
	if (this->vector != nullptr) {
		$nc(this->vector)->removeAllElements();
	}
	if (this->hashtable != nullptr) {
		$nc(this->hashtable)->clear();
	}
}

void clinit$StyleSheet$SearchBuffer($Class* class$) {
	$assignStatic(StyleSheet$SearchBuffer::searchBuffers, $new($Stack));
}

StyleSheet$SearchBuffer::StyleSheet$SearchBuffer() {
}

$Class* StyleSheet$SearchBuffer::load$($String* name, bool initialize) {
	$loadClass(StyleSheet$SearchBuffer, name, initialize, &_StyleSheet$SearchBuffer_ClassInfo_, clinit$StyleSheet$SearchBuffer, allocate$StyleSheet$SearchBuffer);
	return class$;
}

$Class* StyleSheet$SearchBuffer::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax