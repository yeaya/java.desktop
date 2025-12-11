#include <javax/swing/plaf/synth/ParsedSynthStyle$PainterInfo.h>

#include <javax/swing/plaf/synth/ParsedSynthStyle$AggregatePainter.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParsedSynthStyle$AggregatePainter = ::javax::swing::plaf::synth::ParsedSynthStyle$AggregatePainter;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _ParsedSynthStyle$PainterInfo_FieldInfo_[] = {
	{"_method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ParsedSynthStyle$PainterInfo, _method)},
	{"_painter", "Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PRIVATE, $field(ParsedSynthStyle$PainterInfo, _painter)},
	{"_direction", "I", nullptr, $PRIVATE, $field(ParsedSynthStyle$PainterInfo, _direction)},
	{}
};

$MethodInfo _ParsedSynthStyle$PainterInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/swing/plaf/synth/SynthPainter;I)V", nullptr, 0, $method(static_cast<void(ParsedSynthStyle$PainterInfo::*)($String*,$SynthPainter*,int32_t)>(&ParsedSynthStyle$PainterInfo::init$))},
	{"addPainter", "(Ljavax/swing/plaf/synth/SynthPainter;)V", nullptr, 0},
	{"equalsPainter", "(Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;)Z", nullptr, 0},
	{"getDirection", "()I", nullptr, 0},
	{"getMethod", "()Ljava/lang/String;", nullptr, 0},
	{"getPainter", "()Ljavax/swing/plaf/synth/SynthPainter;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ParsedSynthStyle$PainterInfo_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.ParsedSynthStyle$PainterInfo", "javax.swing.plaf.synth.ParsedSynthStyle", "PainterInfo", $STATIC},
	{}
};

$ClassInfo _ParsedSynthStyle$PainterInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.ParsedSynthStyle$PainterInfo",
	"java.lang.Object",
	nullptr,
	_ParsedSynthStyle$PainterInfo_FieldInfo_,
	_ParsedSynthStyle$PainterInfo_MethodInfo_,
	nullptr,
	nullptr,
	_ParsedSynthStyle$PainterInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.ParsedSynthStyle"
};

$Object* allocate$ParsedSynthStyle$PainterInfo($Class* clazz) {
	return $of($alloc(ParsedSynthStyle$PainterInfo));
}

void ParsedSynthStyle$PainterInfo::init$($String* method, $SynthPainter* painter, int32_t direction) {
	if (method != nullptr) {
		$set(this, _method, method->intern());
	}
	$set(this, _painter, painter);
	this->_direction = direction;
}

void ParsedSynthStyle$PainterInfo::addPainter($SynthPainter* painter) {
	if (!($instanceOf($ParsedSynthStyle$AggregatePainter, this->_painter))) {
		$set(this, _painter, $new($ParsedSynthStyle$AggregatePainter, this->_painter));
	}
	$nc(($cast($ParsedSynthStyle$AggregatePainter, this->_painter)))->addPainter(painter);
}

$String* ParsedSynthStyle$PainterInfo::getMethod() {
	return this->_method;
}

$SynthPainter* ParsedSynthStyle$PainterInfo::getPainter() {
	return this->_painter;
}

int32_t ParsedSynthStyle$PainterInfo::getDirection() {
	return this->_direction;
}

bool ParsedSynthStyle$PainterInfo::equalsPainter(ParsedSynthStyle$PainterInfo* info) {
	return (this->_method == $nc(info)->_method && this->_direction == info->_direction);
}

$String* ParsedSynthStyle$PainterInfo::toString() {
	return $str({"PainterInfo {method="_s, this->_method, ",direction="_s, $$str(this->_direction), ",painter="_s, this->_painter, "}"_s});
}

ParsedSynthStyle$PainterInfo::ParsedSynthStyle$PainterInfo() {
}

$Class* ParsedSynthStyle$PainterInfo::load$($String* name, bool initialize) {
	$loadClass(ParsedSynthStyle$PainterInfo, name, initialize, &_ParsedSynthStyle$PainterInfo_ClassInfo_, allocate$ParsedSynthStyle$PainterInfo);
	return class$;
}

$Class* ParsedSynthStyle$PainterInfo::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax