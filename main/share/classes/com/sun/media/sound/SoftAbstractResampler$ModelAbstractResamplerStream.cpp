#include <com/sun/media/sound/SoftAbstractResampler$ModelAbstractResamplerStream.h>

#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <com/sun/media/sound/ModelWavetable.h>
#include <com/sun/media/sound/SoftAbstractResampler.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/VoiceStatus.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $floatArray2 = $Array<float, 2>;
using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $ModelWavetable = ::com::sun::media::sound::ModelWavetable;
using $SoftAbstractResampler = ::com::sun::media::sound::SoftAbstractResampler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $MidiChannel = ::javax::sound::midi::MidiChannel;
using $VoiceStatus = ::javax::sound::midi::VoiceStatus;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftAbstractResampler$ModelAbstractResamplerStream_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftAbstractResampler;", nullptr, $FINAL | $SYNTHETIC, $field(SoftAbstractResampler$ModelAbstractResamplerStream, this$0)},
	{"stream", "Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, stream)},
	{"stream_eof", "Z", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, stream_eof)},
	{"loopmode", "I", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, loopmode)},
	{"loopdirection", "Z", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, loopdirection)},
	{"loopstart", "F", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, loopstart)},
	{"looplen", "F", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, looplen)},
	{"target_pitch", "F", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, target_pitch)},
	{"current_pitch", "[F", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, current_pitch)},
	{"started", "Z", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, started)},
	{"eof", "Z", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, eof)},
	{"sector_pos", "I", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, sector_pos)},
	{"sector_size", "I", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, sector_size)},
	{"sector_loopstart", "I", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, sector_loopstart)},
	{"markset", "Z", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, markset)},
	{"marklimit", "I", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, marklimit)},
	{"streampos", "I", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, streampos)},
	{"nrofchannels", "I", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, nrofchannels)},
	{"noteOff_flag", "Z", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, noteOff_flag)},
	{"ibuffer", "[[F", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, ibuffer)},
	{"ibuffer_order", "Z", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, ibuffer_order)},
	{"sbuffer", "[F", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, sbuffer)},
	{"pad", "I", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, pad)},
	{"pad2", "I", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, pad2)},
	{"ix", "[F", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, ix)},
	{"ox", "[I", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, ox)},
	{"samplerateconv", "F", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, samplerateconv)},
	{"pitchcorrection", "F", nullptr, 0, $field(SoftAbstractResampler$ModelAbstractResamplerStream, pitchcorrection)},
	{}
};

$MethodInfo _SoftAbstractResampler$ModelAbstractResamplerStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftAbstractResampler;)V", nullptr, 0, $method(static_cast<void(SoftAbstractResampler$ModelAbstractResamplerStream::*)($SoftAbstractResampler*)>(&SoftAbstractResampler$ModelAbstractResamplerStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"nextBuffer", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"noteOff", "(I)V", nullptr, $PUBLIC},
	{"noteOn", "(Ljavax/sound/midi/MidiChannel;Ljavax/sound/midi/VoiceStatus;II)V", nullptr, $PUBLIC},
	{"open", "(Lcom/sun/media/sound/ModelWavetable;F)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([[FII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reverseBuffers", "()V", nullptr, $PUBLIC},
	{"setPitch", "(F)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftAbstractResampler$ModelAbstractResamplerStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftAbstractResampler$ModelAbstractResamplerStream", "com.sun.media.sound.SoftAbstractResampler", "ModelAbstractResamplerStream", $PRIVATE},
	{}
};

$ClassInfo _SoftAbstractResampler$ModelAbstractResamplerStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftAbstractResampler$ModelAbstractResamplerStream",
	"java.lang.Object",
	"com.sun.media.sound.SoftResamplerStreamer",
	_SoftAbstractResampler$ModelAbstractResamplerStream_FieldInfo_,
	_SoftAbstractResampler$ModelAbstractResamplerStream_MethodInfo_,
	nullptr,
	nullptr,
	_SoftAbstractResampler$ModelAbstractResamplerStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftAbstractResampler"
};

$Object* allocate$SoftAbstractResampler$ModelAbstractResamplerStream($Class* clazz) {
	return $of($alloc(SoftAbstractResampler$ModelAbstractResamplerStream));
}

void SoftAbstractResampler$ModelAbstractResamplerStream::init$($SoftAbstractResampler* this$0) {
	$set(this, this$0, this$0);
	this->stream_eof = false;
	this->loopdirection = true;
	$set(this, current_pitch, $new($floats, 1));
	this->sector_pos = 0;
	this->sector_size = 400;
	this->sector_loopstart = -1;
	this->markset = false;
	this->marklimit = 0;
	this->streampos = 0;
	this->nrofchannels = 2;
	this->noteOff_flag = false;
	this->ibuffer_order = true;
	$set(this, ix, $new($floats, 1));
	$set(this, ox, $new($ints, 1));
	this->samplerateconv = (float)1;
	this->pitchcorrection = (float)0;
	this->pad = this$0->getPadding();
	this->pad2 = this$0->getPadding() * 2;
	$set(this, ibuffer, $new($floatArray2, 2, this->sector_size + this->pad2));
	this->ibuffer_order = true;
}

void SoftAbstractResampler$ModelAbstractResamplerStream::noteOn($MidiChannel* channel, $VoiceStatus* voice, int32_t noteNumber, int32_t velocity) {
}

void SoftAbstractResampler$ModelAbstractResamplerStream::noteOff(int32_t velocity) {
	this->noteOff_flag = true;
}

void SoftAbstractResampler$ModelAbstractResamplerStream::open($ModelWavetable* osc, float outputsamplerate) {
	this->eof = false;
	this->nrofchannels = $nc(osc)->getChannels();
	if ($nc(this->ibuffer)->length < this->nrofchannels) {
		$set(this, ibuffer, $new($floatArray2, this->nrofchannels, this->sector_size + this->pad2));
	}
	$set(this, stream, osc->openStream());
	this->streampos = 0;
	this->stream_eof = false;
	this->pitchcorrection = osc->getPitchcorrection();
	this->samplerateconv = $nc($($nc(this->stream)->getFormat()))->getSampleRate() / outputsamplerate;
	this->looplen = osc->getLoopLength();
	this->loopstart = osc->getLoopStart();
	this->sector_loopstart = $cast(int32_t, (this->loopstart / this->sector_size));
	this->sector_loopstart = this->sector_loopstart - 1;
	this->sector_pos = 0;
	if (this->sector_loopstart < 0) {
		this->sector_loopstart = 0;
	}
	this->started = false;
	this->loopmode = osc->getLoopType();
	if (this->loopmode != 0) {
		this->markset = false;
		this->marklimit = this->nrofchannels * $cast(int32_t, (this->looplen + this->pad2 + 1));
	} else {
		this->markset = true;
	}
	this->target_pitch = this->samplerateconv;
	$nc(this->current_pitch)->set(0, this->samplerateconv);
	this->ibuffer_order = true;
	this->loopdirection = true;
	this->noteOff_flag = false;
	for (int32_t i = 0; i < this->nrofchannels; ++i) {
		$Arrays::fill($nc(this->ibuffer)->get(i), this->sector_size, this->sector_size + this->pad2, (float)0);
	}
	$nc(this->ix)->set(0, (float)this->pad);
	this->eof = false;
	$nc(this->ix)->set(0, (float)(this->sector_size + this->pad));
	this->sector_pos = -1;
	this->streampos = -this->sector_size;
	nextBuffer();
}

void SoftAbstractResampler$ModelAbstractResamplerStream::setPitch(float pitch) {
	this->target_pitch = (float)$Math::exp((this->pitchcorrection + pitch) * ($Math::log(2.0) / 1200.0)) * this->samplerateconv;
	if (!this->started) {
		$nc(this->current_pitch)->set(0, this->target_pitch);
	}
}

void SoftAbstractResampler$ModelAbstractResamplerStream::nextBuffer() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->ix)->get(0) < this->pad) {
		if (this->markset) {
			$nc(this->stream)->reset();
			(*$nc(this->ix))[0] += this->streampos - (this->sector_loopstart * this->sector_size);
			this->sector_pos = this->sector_loopstart;
			this->streampos = this->sector_pos * this->sector_size;
			(*$nc(this->ix))[0] += this->sector_size;
			this->sector_pos -= 1;
			this->streampos -= this->sector_size;
			this->stream_eof = false;
		}
	}
	if ($nc(this->ix)->get(0) >= this->sector_size + this->pad) {
		if (this->stream_eof) {
			this->eof = true;
			return;
		}
	}
	if ($nc(this->ix)->get(0) >= this->sector_size * 4 + this->pad) {
		int32_t skips = $cast(int32_t, (($nc(this->ix)->get(0) - this->sector_size * 4 + this->pad) / this->sector_size));
		(*$nc(this->ix))[0] -= this->sector_size * skips;
		this->sector_pos += skips;
		this->streampos += this->sector_size * skips;
		$nc(this->stream)->skip(this->sector_size * skips);
	}
	while ($nc(this->ix)->get(0) >= this->sector_size + this->pad) {
		if (!this->markset) {
			if (this->sector_pos + 1 == this->sector_loopstart) {
				$nc(this->stream)->mark(this->marklimit);
				this->markset = true;
			}
		}
		(*$nc(this->ix))[0] -= this->sector_size;
		++this->sector_pos;
		this->streampos += this->sector_size;
		for (int32_t c = 0; c < this->nrofchannels; ++c) {
			$var($floats, cbuffer, $nc(this->ibuffer)->get(c));
			for (int32_t i = 0; i < this->pad2; ++i) {
				$nc(cbuffer)->set(i, cbuffer->get(i + this->sector_size));
			}
		}
		int32_t ret = 0;
		if (this->nrofchannels == 1) {
			ret = $nc(this->stream)->read($nc(this->ibuffer)->get(0), this->pad2, this->sector_size);
		} else {
			int32_t slen = this->sector_size * this->nrofchannels;
			if (this->sbuffer == nullptr || $nc(this->sbuffer)->length < slen) {
				$set(this, sbuffer, $new($floats, slen));
			}
			int32_t sret = $nc(this->stream)->read(this->sbuffer, 0, slen);
			if (sret == -1) {
				ret = -1;
			} else {
				ret = $div(sret, this->nrofchannels);
				for (int32_t i = 0; i < this->nrofchannels; ++i) {
					$var($floats, buff, $nc(this->ibuffer)->get(i));
					int32_t ix = i;
					int32_t ix_step = this->nrofchannels;
					int32_t ox = this->pad2;
					for (int32_t j = 0; j < ret; ++j, ix += ix_step, ++ox) {
						$nc(buff)->set(ox, $nc(this->sbuffer)->get(ix));
					}
				}
			}
		}
		if (ret == -1) {
			ret = 0;
			this->stream_eof = true;
			for (int32_t i = 0; i < this->nrofchannels; ++i) {
				$Arrays::fill($nc(this->ibuffer)->get(i), this->pad2, this->pad2 + this->sector_size, 0.0f);
			}
			return;
		}
		if (ret != this->sector_size) {
			for (int32_t i = 0; i < this->nrofchannels; ++i) {
				$Arrays::fill($nc(this->ibuffer)->get(i), this->pad2 + ret, this->pad2 + this->sector_size, 0.0f);
			}
		}
		this->ibuffer_order = true;
	}
}

void SoftAbstractResampler$ModelAbstractResamplerStream::reverseBuffers() {
	$useLocalCurrentObjectStackCache();
	this->ibuffer_order = !this->ibuffer_order;
	for (int32_t c = 0; c < this->nrofchannels; ++c) {
		$var($floats, cbuff, $nc(this->ibuffer)->get(c));
		int32_t len = $nc(cbuff)->length - 1;
		int32_t len2 = cbuff->length / 2;
		for (int32_t i = 0; i < len2; ++i) {
			float x = cbuff->get(i);
			cbuff->set(i, cbuff->get(len - i));
			cbuff->set(len - i, x);
		}
	}
}

int32_t SoftAbstractResampler$ModelAbstractResamplerStream::read($floatArray2* buffer, int32_t offset, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (this->eof) {
		return -1;
	}
	if (this->noteOff_flag) {
		if (((int32_t)(this->loopmode & (uint32_t)2)) != 0) {
			if (this->loopdirection) {
				this->loopmode = 0;
			}
		}
	}
	float pitchstep = (this->target_pitch - $nc(this->current_pitch)->get(0)) / len;
	$var($floats, current_pitch, this->current_pitch);
	this->started = true;
	$var($ints, ox, this->ox);
	$nc(ox)->set(0, offset);
	int32_t ox_end = len + offset;
	float ixend = (float)(this->sector_size + this->pad);
	if (!this->loopdirection) {
		ixend = (float)this->pad;
	}
	while (ox->get(0) != ox_end) {
		nextBuffer();
		if (!this->loopdirection) {
			if (this->streampos < (this->loopstart + this->pad)) {
				ixend = this->loopstart - this->streampos + this->pad2;
				if ($nc(this->ix)->get(0) <= ixend) {
					if (((int32_t)(this->loopmode & (uint32_t)4)) != 0) {
						this->loopdirection = true;
						ixend = (float)(this->sector_size + this->pad);
						continue;
					}
					(*$nc(this->ix))[0] += this->looplen;
					ixend = (float)this->pad;
					continue;
				}
			}
			if (this->ibuffer_order != this->loopdirection) {
				reverseBuffers();
			}
			$nc(this->ix)->set(0, (this->sector_size + this->pad2) - $nc(this->ix)->get(0));
			ixend = (this->sector_size + this->pad2) - ixend;
			++ixend;
			float bak_ix = $nc(this->ix)->get(0);
			int32_t bak_ox = ox->get(0);
			float bak_pitch = $nc(current_pitch)->get(0);
			for (int32_t i = 0; i < this->nrofchannels; ++i) {
				if ($nc(buffer)->get(i) != nullptr) {
					$nc(this->ix)->set(0, bak_ix);
					ox->set(0, bak_ox);
					current_pitch->set(0, bak_pitch);
					this->this$0->interpolate($nc(this->ibuffer)->get(i), this->ix, ixend, current_pitch, pitchstep, buffer->get(i), ox, ox_end);
				}
			}
			$nc(this->ix)->set(0, (this->sector_size + this->pad2) - $nc(this->ix)->get(0));
			--ixend;
			ixend = (this->sector_size + this->pad2) - ixend;
			if (this->eof) {
				current_pitch->set(0, this->target_pitch);
				return ox->get(0) - offset;
			}
			continue;
		}
		if (this->loopmode != 0) {
			if (this->streampos + this->sector_size > (this->looplen + this->loopstart + this->pad)) {
				ixend = this->loopstart + this->looplen - this->streampos + this->pad2;
				if ($nc(this->ix)->get(0) >= ixend) {
					if (((int32_t)(this->loopmode & (uint32_t)4)) != 0 || ((int32_t)(this->loopmode & (uint32_t)8)) != 0) {
						this->loopdirection = false;
						ixend = (float)this->pad;
						continue;
					}
					ixend = (float)(this->sector_size + this->pad);
					(*$nc(this->ix))[0] -= this->looplen;
					continue;
				}
			}
		}
		if (this->ibuffer_order != this->loopdirection) {
			reverseBuffers();
		}
		float bak_ix = $nc(this->ix)->get(0);
		int32_t bak_ox = ox->get(0);
		float bak_pitch = $nc(current_pitch)->get(0);
		for (int32_t i = 0; i < this->nrofchannels; ++i) {
			if ($nc(buffer)->get(i) != nullptr) {
				$nc(this->ix)->set(0, bak_ix);
				ox->set(0, bak_ox);
				current_pitch->set(0, bak_pitch);
				this->this$0->interpolate($nc(this->ibuffer)->get(i), this->ix, ixend, current_pitch, pitchstep, buffer->get(i), ox, ox_end);
			}
		}
		if (this->eof) {
			current_pitch->set(0, this->target_pitch);
			return ox->get(0) - offset;
		}
	}
	$nc(current_pitch)->set(0, this->target_pitch);
	return len;
}

void SoftAbstractResampler$ModelAbstractResamplerStream::close() {
	$nc(this->stream)->close();
}

SoftAbstractResampler$ModelAbstractResamplerStream::SoftAbstractResampler$ModelAbstractResamplerStream() {
}

$Class* SoftAbstractResampler$ModelAbstractResamplerStream::load$($String* name, bool initialize) {
	$loadClass(SoftAbstractResampler$ModelAbstractResamplerStream, name, initialize, &_SoftAbstractResampler$ModelAbstractResamplerStream_ClassInfo_, allocate$SoftAbstractResampler$ModelAbstractResamplerStream);
	return class$;
}

$Class* SoftAbstractResampler$ModelAbstractResamplerStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com