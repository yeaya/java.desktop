#include <javax/swing/text/rtf/RTFReader$ColortblDestination.h>

#include <java/awt/Color.h>
#include <java/util/Dictionary.h>
#include <java/util/Vector.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Dictionary = ::java::util::Dictionary;
using $Vector = ::java::util::Vector;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFReader$ColortblDestination_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/rtf/RTFReader;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$ColortblDestination, this$0)},
	{"red", "I", nullptr, 0, $field(RTFReader$ColortblDestination, red)},
	{"green", "I", nullptr, 0, $field(RTFReader$ColortblDestination, green)},
	{"blue", "I", nullptr, 0, $field(RTFReader$ColortblDestination, blue)},
	{"proTemTable", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/Color;>;", 0, $field(RTFReader$ColortblDestination, proTemTable)},
	{}
};

$MethodInfo _RTFReader$ColortblDestination_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/rtf/RTFReader;)V", nullptr, $PUBLIC, $method(static_cast<void(RTFReader$ColortblDestination::*)($RTFReader*)>(&RTFReader$ColortblDestination::init$))},
	{"begingroup", "()V", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"endgroup", "(Ljava/util/Dictionary;)V", "(Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC},
	{"handleBinaryBlob", "([B)V", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RTFReader$ColortblDestination_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$ColortblDestination", "javax.swing.text.rtf.RTFReader", "ColortblDestination", 0},
	{"javax.swing.text.rtf.RTFReader$Destination", "javax.swing.text.rtf.RTFReader", "Destination", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RTFReader$ColortblDestination_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFReader$ColortblDestination",
	"java.lang.Object",
	"javax.swing.text.rtf.RTFReader$Destination",
	_RTFReader$ColortblDestination_FieldInfo_,
	_RTFReader$ColortblDestination_MethodInfo_,
	nullptr,
	nullptr,
	_RTFReader$ColortblDestination_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader"
};

$Object* allocate$RTFReader$ColortblDestination($Class* clazz) {
	return $of($alloc(RTFReader$ColortblDestination));
}

void RTFReader$ColortblDestination::init$($RTFReader* this$0) {
	$set(this, this$0, this$0);
	this->red = 0;
	this->green = 0;
	this->blue = 0;
	$set(this, proTemTable, $new($Vector));
}

void RTFReader$ColortblDestination::handleText($String* text) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	for (index = 0; index < $nc(text)->length(); ++index) {
		if (text->charAt(index) == u';') {
			$var($Color, newColor, nullptr);
			$assign(newColor, $new($Color, this->red, this->green, this->blue));
			$nc(this->proTemTable)->addElement(newColor);
		}
	}
}

void RTFReader$ColortblDestination::close() {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(this->proTemTable)->size();
	this->this$0->warning($$str({"Done reading color table, "_s, $$str(count), " entries."_s}));
	$set(this->this$0, colorTable, $new($ColorArray, count));
	$nc(this->proTemTable)->copyInto(this->this$0->colorTable);
}

bool RTFReader$ColortblDestination::handleKeyword($String* keyword, int32_t parameter) {
	if ($nc(keyword)->equals("red"_s)) {
		this->red = parameter;
	} else if (keyword->equals("green"_s)) {
		this->green = parameter;
	} else if (keyword->equals("blue"_s)) {
		this->blue = parameter;
	} else {
		return false;
	}
	return true;
}

bool RTFReader$ColortblDestination::handleKeyword($String* keyword) {
	return false;
}

void RTFReader$ColortblDestination::begingroup() {
}

void RTFReader$ColortblDestination::endgroup($Dictionary* oldState) {
}

void RTFReader$ColortblDestination::handleBinaryBlob($bytes* data) {
}

RTFReader$ColortblDestination::RTFReader$ColortblDestination() {
}

$Class* RTFReader$ColortblDestination::load$($String* name, bool initialize) {
	$loadClass(RTFReader$ColortblDestination, name, initialize, &_RTFReader$ColortblDestination_ClassInfo_, allocate$RTFReader$ColortblDestination);
	return class$;
}

$Class* RTFReader$ColortblDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax