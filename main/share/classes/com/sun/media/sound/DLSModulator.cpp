#include <com/sun/media/sound/DLSModulator.h>

#include <jcpp.h>

#undef CONN_DST_CENTER
#undef CONN_DST_CHORUS
#undef CONN_DST_EG1_ATTACKTIME
#undef CONN_DST_EG1_DECAYTIME
#undef CONN_DST_EG1_DELAYTIME
#undef CONN_DST_EG1_HOLDTIME
#undef CONN_DST_EG1_RELEASETIME
#undef CONN_DST_EG1_SHUTDOWNTIME
#undef CONN_DST_EG1_SUSTAINLEVEL
#undef CONN_DST_EG2_ATTACKTIME
#undef CONN_DST_EG2_DECAYTIME
#undef CONN_DST_EG2_DELAYTIME
#undef CONN_DST_EG2_HOLDTIME
#undef CONN_DST_EG2_RELEASETIME
#undef CONN_DST_EG2_SUSTAINLEVEL
#undef CONN_DST_FILTER_CUTOFF
#undef CONN_DST_FILTER_Q
#undef CONN_DST_GAIN
#undef CONN_DST_KEYNUMBER
#undef CONN_DST_LEFT
#undef CONN_DST_LEFTREAR
#undef CONN_DST_LFE_CHANNEL
#undef CONN_DST_LFO_FREQUENCY
#undef CONN_DST_LFO_STARTDELAY
#undef CONN_DST_NONE
#undef CONN_DST_PAN
#undef CONN_DST_PITCH
#undef CONN_DST_REVERB
#undef CONN_DST_RIGHT
#undef CONN_DST_RIGHTREAR
#undef CONN_DST_VIB_FREQUENCY
#undef CONN_DST_VIB_STARTDELAY
#undef CONN_SRC_CC1
#undef CONN_SRC_CC10
#undef CONN_SRC_CC11
#undef CONN_SRC_CC7
#undef CONN_SRC_CC91
#undef CONN_SRC_CC93
#undef CONN_SRC_CHANNELPRESSURE
#undef CONN_SRC_EG1
#undef CONN_SRC_EG2
#undef CONN_SRC_KEYNUMBER
#undef CONN_SRC_KEYONVELOCITY
#undef CONN_SRC_LFO
#undef CONN_SRC_MONOPRESSURE
#undef CONN_SRC_NONE
#undef CONN_SRC_PITCHWHEEL
#undef CONN_SRC_POLYPRESSURE
#undef CONN_SRC_RPN0
#undef CONN_SRC_RPN1
#undef CONN_SRC_RPN2
#undef CONN_SRC_VIBRATO
#undef CONN_TRN_CONCAVE
#undef CONN_TRN_CONVEX
#undef CONN_TRN_NONE
#undef CONN_TRN_SWITCH
#undef DST_FORMAT_CB
#undef DST_FORMAT_CENT
#undef DST_FORMAT_PERCENT
#undef DST_FORMAT_TIMECENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DLSModulator_FieldInfo_[] = {
	{"CONN_DST_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_NONE)},
	{"CONN_DST_GAIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_GAIN)},
	{"CONN_DST_PITCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_PITCH)},
	{"CONN_DST_PAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_PAN)},
	{"CONN_DST_LFO_FREQUENCY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_LFO_FREQUENCY)},
	{"CONN_DST_LFO_STARTDELAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_LFO_STARTDELAY)},
	{"CONN_DST_EG1_ATTACKTIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG1_ATTACKTIME)},
	{"CONN_DST_EG1_DECAYTIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG1_DECAYTIME)},
	{"CONN_DST_EG1_RELEASETIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG1_RELEASETIME)},
	{"CONN_DST_EG1_SUSTAINLEVEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG1_SUSTAINLEVEL)},
	{"CONN_DST_EG2_ATTACKTIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG2_ATTACKTIME)},
	{"CONN_DST_EG2_DECAYTIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG2_DECAYTIME)},
	{"CONN_DST_EG2_RELEASETIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG2_RELEASETIME)},
	{"CONN_DST_EG2_SUSTAINLEVEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG2_SUSTAINLEVEL)},
	{"CONN_DST_KEYNUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_KEYNUMBER)},
	{"CONN_DST_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_LEFT)},
	{"CONN_DST_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_RIGHT)},
	{"CONN_DST_CENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_CENTER)},
	{"CONN_DST_LEFTREAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_LEFTREAR)},
	{"CONN_DST_RIGHTREAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_RIGHTREAR)},
	{"CONN_DST_LFE_CHANNEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_LFE_CHANNEL)},
	{"CONN_DST_CHORUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_CHORUS)},
	{"CONN_DST_REVERB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_REVERB)},
	{"CONN_DST_VIB_FREQUENCY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_VIB_FREQUENCY)},
	{"CONN_DST_VIB_STARTDELAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_VIB_STARTDELAY)},
	{"CONN_DST_EG1_DELAYTIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG1_DELAYTIME)},
	{"CONN_DST_EG1_HOLDTIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG1_HOLDTIME)},
	{"CONN_DST_EG1_SHUTDOWNTIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG1_SHUTDOWNTIME)},
	{"CONN_DST_EG2_DELAYTIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG2_DELAYTIME)},
	{"CONN_DST_EG2_HOLDTIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_EG2_HOLDTIME)},
	{"CONN_DST_FILTER_CUTOFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_FILTER_CUTOFF)},
	{"CONN_DST_FILTER_Q", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_DST_FILTER_Q)},
	{"CONN_SRC_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_NONE)},
	{"CONN_SRC_LFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_LFO)},
	{"CONN_SRC_KEYONVELOCITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_KEYONVELOCITY)},
	{"CONN_SRC_KEYNUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_KEYNUMBER)},
	{"CONN_SRC_EG1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_EG1)},
	{"CONN_SRC_EG2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_EG2)},
	{"CONN_SRC_PITCHWHEEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_PITCHWHEEL)},
	{"CONN_SRC_CC1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_CC1)},
	{"CONN_SRC_CC7", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_CC7)},
	{"CONN_SRC_CC10", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_CC10)},
	{"CONN_SRC_CC11", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_CC11)},
	{"CONN_SRC_RPN0", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_RPN0)},
	{"CONN_SRC_RPN1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_RPN1)},
	{"CONN_SRC_RPN2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_RPN2)},
	{"CONN_SRC_POLYPRESSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_POLYPRESSURE)},
	{"CONN_SRC_CHANNELPRESSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_CHANNELPRESSURE)},
	{"CONN_SRC_VIBRATO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_VIBRATO)},
	{"CONN_SRC_MONOPRESSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_MONOPRESSURE)},
	{"CONN_SRC_CC91", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_CC91)},
	{"CONN_SRC_CC93", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_SRC_CC93)},
	{"CONN_TRN_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_TRN_NONE)},
	{"CONN_TRN_CONCAVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_TRN_CONCAVE)},
	{"CONN_TRN_CONVEX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_TRN_CONVEX)},
	{"CONN_TRN_SWITCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, CONN_TRN_SWITCH)},
	{"DST_FORMAT_CB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, DST_FORMAT_CB)},
	{"DST_FORMAT_CENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, DST_FORMAT_CENT)},
	{"DST_FORMAT_TIMECENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, DST_FORMAT_TIMECENT)},
	{"DST_FORMAT_PERCENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSModulator, DST_FORMAT_PERCENT)},
	{"source", "I", nullptr, 0, $field(DLSModulator, source)},
	{"control", "I", nullptr, 0, $field(DLSModulator, control)},
	{"destination", "I", nullptr, 0, $field(DLSModulator, destination)},
	{"transform", "I", nullptr, 0, $field(DLSModulator, transform)},
	{"scale", "I", nullptr, 0, $field(DLSModulator, scale)},
	{"version", "I", nullptr, 0, $field(DLSModulator, version)},
	{}
};

$MethodInfo _DLSModulator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DLSModulator::*)()>(&DLSModulator::init$))},
	{"getControl", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSModulator::*)()>(&DLSModulator::getControl))},
	{"getDestination", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSModulator::*)()>(&DLSModulator::getDestination))},
	{"getDestinationFormat", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&DLSModulator::getDestinationFormat))},
	{"getDestinationName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&DLSModulator::getDestinationName))},
	{"getScale", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSModulator::*)()>(&DLSModulator::getScale))},
	{"getSource", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSModulator::*)()>(&DLSModulator::getSource))},
	{"getSourceName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&DLSModulator::getSourceName))},
	{"getTransform", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSModulator::*)()>(&DLSModulator::getTransform))},
	{"getVersion", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSModulator::*)()>(&DLSModulator::getVersion))},
	{"setControl", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSModulator::*)(int32_t)>(&DLSModulator::setControl))},
	{"setDestination", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSModulator::*)(int32_t)>(&DLSModulator::setDestination))},
	{"setScale", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSModulator::*)(int32_t)>(&DLSModulator::setScale))},
	{"setSource", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSModulator::*)(int32_t)>(&DLSModulator::setSource))},
	{"setTransform", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSModulator::*)(int32_t)>(&DLSModulator::setTransform))},
	{"setVersion", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSModulator::*)(int32_t)>(&DLSModulator::setVersion))},
	{}
};

$ClassInfo _DLSModulator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DLSModulator",
	"java.lang.Object",
	nullptr,
	_DLSModulator_FieldInfo_,
	_DLSModulator_MethodInfo_
};

$Object* allocate$DLSModulator($Class* clazz) {
	return $of($alloc(DLSModulator));
}

void DLSModulator::init$() {
	this->version = 1;
}

int32_t DLSModulator::getControl() {
	return this->control;
}

void DLSModulator::setControl(int32_t control) {
	this->control = control;
}

int32_t DLSModulator::getDestinationFormat(int32_t destination) {
	if (destination == DLSModulator::CONN_DST_GAIN) {
		return DLSModulator::DST_FORMAT_CB;
	}
	if (destination == DLSModulator::CONN_DST_PITCH) {
		return DLSModulator::DST_FORMAT_CENT;
	}
	if (destination == DLSModulator::CONN_DST_PAN) {
		return DLSModulator::DST_FORMAT_PERCENT;
	}
	if (destination == DLSModulator::CONN_DST_LFO_FREQUENCY) {
		return DLSModulator::DST_FORMAT_CENT;
	}
	if (destination == DLSModulator::CONN_DST_LFO_STARTDELAY) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG1_ATTACKTIME) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG1_DECAYTIME) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG1_RELEASETIME) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG1_SUSTAINLEVEL) {
		return DLSModulator::DST_FORMAT_PERCENT;
	}
	if (destination == DLSModulator::CONN_DST_EG2_ATTACKTIME) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG2_DECAYTIME) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG2_RELEASETIME) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG2_SUSTAINLEVEL) {
		return DLSModulator::DST_FORMAT_PERCENT;
	}
	if (destination == DLSModulator::CONN_DST_KEYNUMBER) {
		return DLSModulator::DST_FORMAT_CENT;
	}
	if (destination == DLSModulator::CONN_DST_LEFT) {
		return DLSModulator::DST_FORMAT_CB;
	}
	if (destination == DLSModulator::CONN_DST_RIGHT) {
		return DLSModulator::DST_FORMAT_CB;
	}
	if (destination == DLSModulator::CONN_DST_CENTER) {
		return DLSModulator::DST_FORMAT_CB;
	}
	if (destination == DLSModulator::CONN_DST_LEFTREAR) {
		return DLSModulator::DST_FORMAT_CB;
	}
	if (destination == DLSModulator::CONN_DST_RIGHTREAR) {
		return DLSModulator::DST_FORMAT_CB;
	}
	if (destination == DLSModulator::CONN_DST_LFE_CHANNEL) {
		return DLSModulator::DST_FORMAT_CB;
	}
	if (destination == DLSModulator::CONN_DST_CHORUS) {
		return DLSModulator::DST_FORMAT_PERCENT;
	}
	if (destination == DLSModulator::CONN_DST_REVERB) {
		return DLSModulator::DST_FORMAT_PERCENT;
	}
	if (destination == DLSModulator::CONN_DST_VIB_FREQUENCY) {
		return DLSModulator::DST_FORMAT_CENT;
	}
	if (destination == DLSModulator::CONN_DST_VIB_STARTDELAY) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG1_DELAYTIME) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG1_HOLDTIME) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG1_SHUTDOWNTIME) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG2_DELAYTIME) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_EG2_HOLDTIME) {
		return DLSModulator::DST_FORMAT_TIMECENT;
	}
	if (destination == DLSModulator::CONN_DST_FILTER_CUTOFF) {
		return DLSModulator::DST_FORMAT_CENT;
	}
	if (destination == DLSModulator::CONN_DST_FILTER_Q) {
		return DLSModulator::DST_FORMAT_CB;
	}
	return -1;
}

$String* DLSModulator::getDestinationName(int32_t destination) {
	if (destination == DLSModulator::CONN_DST_GAIN) {
		return "gain"_s;
	}
	if (destination == DLSModulator::CONN_DST_PITCH) {
		return "pitch"_s;
	}
	if (destination == DLSModulator::CONN_DST_PAN) {
		return "pan"_s;
	}
	if (destination == DLSModulator::CONN_DST_LFO_FREQUENCY) {
		return "lfo1.freq"_s;
	}
	if (destination == DLSModulator::CONN_DST_LFO_STARTDELAY) {
		return "lfo1.delay"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG1_ATTACKTIME) {
		return "eg1.attack"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG1_DECAYTIME) {
		return "eg1.decay"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG1_RELEASETIME) {
		return "eg1.release"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG1_SUSTAINLEVEL) {
		return "eg1.sustain"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG2_ATTACKTIME) {
		return "eg2.attack"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG2_DECAYTIME) {
		return "eg2.decay"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG2_RELEASETIME) {
		return "eg2.release"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG2_SUSTAINLEVEL) {
		return "eg2.sustain"_s;
	}
	if (destination == DLSModulator::CONN_DST_KEYNUMBER) {
		return "keynumber"_s;
	}
	if (destination == DLSModulator::CONN_DST_LEFT) {
		return "left"_s;
	}
	if (destination == DLSModulator::CONN_DST_RIGHT) {
		return "right"_s;
	}
	if (destination == DLSModulator::CONN_DST_CENTER) {
		return "center"_s;
	}
	if (destination == DLSModulator::CONN_DST_LEFTREAR) {
		return "leftrear"_s;
	}
	if (destination == DLSModulator::CONN_DST_RIGHTREAR) {
		return "rightrear"_s;
	}
	if (destination == DLSModulator::CONN_DST_LFE_CHANNEL) {
		return "lfe_channel"_s;
	}
	if (destination == DLSModulator::CONN_DST_CHORUS) {
		return "chorus"_s;
	}
	if (destination == DLSModulator::CONN_DST_REVERB) {
		return "reverb"_s;
	}
	if (destination == DLSModulator::CONN_DST_VIB_FREQUENCY) {
		return "vib.freq"_s;
	}
	if (destination == DLSModulator::CONN_DST_VIB_STARTDELAY) {
		return "vib.delay"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG1_DELAYTIME) {
		return "eg1.delay"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG1_HOLDTIME) {
		return "eg1.hold"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG1_SHUTDOWNTIME) {
		return "eg1.shutdown"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG2_DELAYTIME) {
		return "eg2.delay"_s;
	}
	if (destination == DLSModulator::CONN_DST_EG2_HOLDTIME) {
		return "eg.2hold"_s;
	}
	if (destination == DLSModulator::CONN_DST_FILTER_CUTOFF) {
		return "filter.cutoff"_s;
	}
	if (destination == DLSModulator::CONN_DST_FILTER_Q) {
		return "filter.q"_s;
	}
	return nullptr;
}

$String* DLSModulator::getSourceName(int32_t source) {
	if (source == DLSModulator::CONN_SRC_NONE) {
		return "none"_s;
	}
	if (source == DLSModulator::CONN_SRC_LFO) {
		return "lfo"_s;
	}
	if (source == DLSModulator::CONN_SRC_KEYONVELOCITY) {
		return "keyonvelocity"_s;
	}
	if (source == DLSModulator::CONN_SRC_KEYNUMBER) {
		return "keynumber"_s;
	}
	if (source == DLSModulator::CONN_SRC_EG1) {
		return "eg1"_s;
	}
	if (source == DLSModulator::CONN_SRC_EG2) {
		return "eg2"_s;
	}
	if (source == DLSModulator::CONN_SRC_PITCHWHEEL) {
		return "pitchweel"_s;
	}
	if (source == DLSModulator::CONN_SRC_CC1) {
		return "cc1"_s;
	}
	if (source == DLSModulator::CONN_SRC_CC7) {
		return "cc7"_s;
	}
	if (source == DLSModulator::CONN_SRC_CC10) {
		return "c10"_s;
	}
	if (source == DLSModulator::CONN_SRC_CC11) {
		return "cc11"_s;
	}
	if (source == DLSModulator::CONN_SRC_POLYPRESSURE) {
		return "polypressure"_s;
	}
	if (source == DLSModulator::CONN_SRC_CHANNELPRESSURE) {
		return "channelpressure"_s;
	}
	if (source == DLSModulator::CONN_SRC_VIBRATO) {
		return "vibrato"_s;
	}
	if (source == DLSModulator::CONN_SRC_MONOPRESSURE) {
		return "monopressure"_s;
	}
	if (source == DLSModulator::CONN_SRC_CC91) {
		return "cc91"_s;
	}
	if (source == DLSModulator::CONN_SRC_CC93) {
		return "cc93"_s;
	}
	return nullptr;
}

int32_t DLSModulator::getDestination() {
	return this->destination;
}

void DLSModulator::setDestination(int32_t destination) {
	this->destination = destination;
}

int32_t DLSModulator::getScale() {
	return this->scale;
}

void DLSModulator::setScale(int32_t scale) {
	this->scale = scale;
}

int32_t DLSModulator::getSource() {
	return this->source;
}

void DLSModulator::setSource(int32_t source) {
	this->source = source;
}

int32_t DLSModulator::getVersion() {
	return this->version;
}

void DLSModulator::setVersion(int32_t version) {
	this->version = version;
}

int32_t DLSModulator::getTransform() {
	return this->transform;
}

void DLSModulator::setTransform(int32_t transform) {
	this->transform = transform;
}

DLSModulator::DLSModulator() {
}

$Class* DLSModulator::load$($String* name, bool initialize) {
	$loadClass(DLSModulator, name, initialize, &_DLSModulator_ClassInfo_, allocate$DLSModulator);
	return class$;
}

$Class* DLSModulator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com