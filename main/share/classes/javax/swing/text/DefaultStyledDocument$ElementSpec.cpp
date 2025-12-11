#include <javax/swing/text/DefaultStyledDocument$ElementSpec.h>

#include <java/util/Arrays.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultStyledDocument$ElementSpec_FieldInfo_[] = {
	{"StartTagType", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultStyledDocument$ElementSpec, StartTagType)},
	{"EndTagType", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultStyledDocument$ElementSpec, EndTagType)},
	{"ContentType", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultStyledDocument$ElementSpec, ContentType)},
	{"JoinPreviousDirection", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultStyledDocument$ElementSpec, JoinPreviousDirection)},
	{"JoinNextDirection", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultStyledDocument$ElementSpec, JoinNextDirection)},
	{"OriginateDirection", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultStyledDocument$ElementSpec, OriginateDirection)},
	{"JoinFractureDirection", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultStyledDocument$ElementSpec, JoinFractureDirection)},
	{"attr", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(DefaultStyledDocument$ElementSpec, attr)},
	{"len", "I", nullptr, $PRIVATE, $field(DefaultStyledDocument$ElementSpec, len)},
	{"type", "S", nullptr, $PRIVATE, $field(DefaultStyledDocument$ElementSpec, type)},
	{"direction", "S", nullptr, $PRIVATE, $field(DefaultStyledDocument$ElementSpec, direction)},
	{"offs", "I", nullptr, $PRIVATE, $field(DefaultStyledDocument$ElementSpec, offs)},
	{"data", "[C", nullptr, $PRIVATE, $field(DefaultStyledDocument$ElementSpec, data)},
	{}
};

$MethodInfo _DefaultStyledDocument$ElementSpec_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AttributeSet;S)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultStyledDocument$ElementSpec::*)($AttributeSet*,int16_t)>(&DefaultStyledDocument$ElementSpec::init$))},
	{"<init>", "(Ljavax/swing/text/AttributeSet;SI)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultStyledDocument$ElementSpec::*)($AttributeSet*,int16_t,int32_t)>(&DefaultStyledDocument$ElementSpec::init$))},
	{"<init>", "(Ljavax/swing/text/AttributeSet;S[CII)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultStyledDocument$ElementSpec::*)($AttributeSet*,int16_t,$chars*,int32_t,int32_t)>(&DefaultStyledDocument$ElementSpec::init$))},
	{"getArray", "()[C", nullptr, $PUBLIC},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getDirection", "()S", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getOffset", "()I", nullptr, $PUBLIC},
	{"getType", "()S", nullptr, $PUBLIC},
	{"setDirection", "(S)V", nullptr, $PUBLIC},
	{"setType", "(S)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultStyledDocument$ElementSpec_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultStyledDocument$ElementSpec", "javax.swing.text.DefaultStyledDocument", "ElementSpec", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultStyledDocument$ElementSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultStyledDocument$ElementSpec",
	"java.lang.Object",
	nullptr,
	_DefaultStyledDocument$ElementSpec_FieldInfo_,
	_DefaultStyledDocument$ElementSpec_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultStyledDocument$ElementSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultStyledDocument"
};

$Object* allocate$DefaultStyledDocument$ElementSpec($Class* clazz) {
	return $of($alloc(DefaultStyledDocument$ElementSpec));
}

void DefaultStyledDocument$ElementSpec::init$($AttributeSet* a, int16_t type) {
	DefaultStyledDocument$ElementSpec::init$(a, type, nullptr, 0, 0);
}

void DefaultStyledDocument$ElementSpec::init$($AttributeSet* a, int16_t type, int32_t len) {
	DefaultStyledDocument$ElementSpec::init$(a, type, nullptr, 0, len);
}

void DefaultStyledDocument$ElementSpec::init$($AttributeSet* a, int16_t type, $chars* txt, int32_t offs, int32_t len) {
	$set(this, attr, a);
	this->type = type;
	$set(this, data, txt == nullptr ? ($chars*)nullptr : $Arrays::copyOf(txt, $nc(txt)->length));
	this->offs = offs;
	this->len = len;
	this->direction = DefaultStyledDocument$ElementSpec::OriginateDirection;
}

void DefaultStyledDocument$ElementSpec::setType(int16_t type) {
	this->type = type;
}

int16_t DefaultStyledDocument$ElementSpec::getType() {
	return this->type;
}

void DefaultStyledDocument$ElementSpec::setDirection(int16_t direction) {
	this->direction = direction;
}

int16_t DefaultStyledDocument$ElementSpec::getDirection() {
	return this->direction;
}

$AttributeSet* DefaultStyledDocument$ElementSpec::getAttributes() {
	return this->attr;
}

$chars* DefaultStyledDocument$ElementSpec::getArray() {
	return this->data == nullptr ? ($chars*)nullptr : $Arrays::copyOf(this->data, $nc(this->data)->length);
}

int32_t DefaultStyledDocument$ElementSpec::getOffset() {
	return this->offs;
}

int32_t DefaultStyledDocument$ElementSpec::getLength() {
	return this->len;
}

$String* DefaultStyledDocument$ElementSpec::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, tlbl, "??"_s);
	$var($String, plbl, "??"_s);
	switch (this->type) {
	case DefaultStyledDocument$ElementSpec::StartTagType:
		{
			$assign(tlbl, "StartTag"_s);
			break;
		}
	case DefaultStyledDocument$ElementSpec::ContentType:
		{
			$assign(tlbl, "Content"_s);
			break;
		}
	case DefaultStyledDocument$ElementSpec::EndTagType:
		{
			$assign(tlbl, "EndTag"_s);
			break;
		}
	}
	switch (this->direction) {
	case DefaultStyledDocument$ElementSpec::JoinPreviousDirection:
		{
			$assign(plbl, "JoinPrevious"_s);
			break;
		}
	case DefaultStyledDocument$ElementSpec::JoinNextDirection:
		{
			$assign(plbl, "JoinNext"_s);
			break;
		}
	case DefaultStyledDocument$ElementSpec::OriginateDirection:
		{
			$assign(plbl, "Originate"_s);
			break;
		}
	case DefaultStyledDocument$ElementSpec::JoinFractureDirection:
		{
			$assign(plbl, "Fracture"_s);
			break;
		}
	}
	return $str({tlbl, ":"_s, plbl, ":"_s, $$str(getLength())});
}

DefaultStyledDocument$ElementSpec::DefaultStyledDocument$ElementSpec() {
}

$Class* DefaultStyledDocument$ElementSpec::load$($String* name, bool initialize) {
	$loadClass(DefaultStyledDocument$ElementSpec, name, initialize, &_DefaultStyledDocument$ElementSpec_ClassInfo_, allocate$DefaultStyledDocument$ElementSpec);
	return class$;
}

$Class* DefaultStyledDocument$ElementSpec::class$ = nullptr;

		} // text
	} // swing
} // javax