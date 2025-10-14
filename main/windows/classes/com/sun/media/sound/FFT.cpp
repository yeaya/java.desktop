#include <com/sun/media/sound/FFT.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FFT
#undef PI

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _FFT_FieldInfo_[] = {
	{"w", "[D", nullptr, $PRIVATE | $FINAL, $field(FFT, w)},
	{"fftFrameSize", "I", nullptr, $PRIVATE | $FINAL, $field(FFT, fftFrameSize)},
	{"sign", "I", nullptr, $PRIVATE | $FINAL, $field(FFT, sign)},
	{"bitm_array", "[I", nullptr, $PRIVATE | $FINAL, $field(FFT, bitm_array)},
	{"fftFrameSize2", "I", nullptr, $PRIVATE | $FINAL, $field(FFT, fftFrameSize2)},
	{}
};

$MethodInfo _FFT_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(FFT::*)(int32_t,int32_t)>(&FFT::init$))},
	{"bitreversal", "([D)V", nullptr, $PRIVATE, $method(static_cast<void(FFT::*)($doubles*)>(&FFT::bitreversal))},
	{"calc", "(I[DI[D)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$doubles*,int32_t,$doubles*)>(&FFT::calc))},
	{"calcF2E", "(I[DII[D)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$doubles*,int32_t,int32_t,$doubles*)>(&FFT::calcF2E))},
	{"calcF4F", "(I[DII[D)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$doubles*,int32_t,int32_t,$doubles*)>(&FFT::calcF4F))},
	{"calcF4FE", "(I[DII[D)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$doubles*,int32_t,int32_t,$doubles*)>(&FFT::calcF4FE))},
	{"calcF4I", "(I[DII[D)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$doubles*,int32_t,int32_t,$doubles*)>(&FFT::calcF4I))},
	{"calcF4IE", "(I[DII[D)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$doubles*,int32_t,int32_t,$doubles*)>(&FFT::calcF4IE))},
	{"computeTwiddleFactors", "(II)[D", nullptr, $PRIVATE | $STATIC, $method(static_cast<$doubles*(*)(int32_t,int32_t)>(&FFT::computeTwiddleFactors))},
	{"transform", "([D)V", nullptr, $PUBLIC, $method(static_cast<void(FFT::*)($doubles*)>(&FFT::transform))},
	{}
};

$ClassInfo _FFT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.FFT",
	"java.lang.Object",
	nullptr,
	_FFT_FieldInfo_,
	_FFT_MethodInfo_
};

$Object* allocate$FFT($Class* clazz) {
	return $of($alloc(FFT));
}

void FFT::init$(int32_t fftFrameSize, int32_t sign) {
	$set(this, w, computeTwiddleFactors(fftFrameSize, sign));
	this->fftFrameSize = fftFrameSize;
	this->sign = sign;
	this->fftFrameSize2 = fftFrameSize << 1;
	$set(this, bitm_array, $new($ints, this->fftFrameSize2));
	for (int32_t i = 2; i < this->fftFrameSize2; i += 2) {
		int32_t j = 0;
		int32_t bitm = 0;
		for (bitm = 2, j = 0; bitm < this->fftFrameSize2; bitm <<= 1) {
			if (((int32_t)(i & (uint32_t)bitm)) != 0) {
				++j;
			}
			j <<= 1;
		}
		$nc(this->bitm_array)->set(i, j);
	}
}

void FFT::transform($doubles* data) {
	bitreversal(data);
	calc(this->fftFrameSize, data, this->sign, this->w);
}

$doubles* FFT::computeTwiddleFactors(int32_t fftFrameSize, int32_t sign) {
	double var$0 = $Math::log((double)fftFrameSize);
	int32_t imax = $cast(int32_t, (var$0 / $Math::log(2.0)));
	$var($doubles, warray, $new($doubles, (fftFrameSize - 1) * 4));
	int32_t w_index = 0;
	{
		int32_t i = 0;
		int32_t nstep = 2;
		for (; i < imax; ++i) {
			int32_t jmax = nstep;
			nstep <<= 1;
			double wr = 1.0;
			double wi = 0.0;
			double arg = $Math::PI / (jmax >> 1);
			double wfr = $Math::cos(arg);
			double wfi = sign * $Math::sin(arg);
			for (int32_t j = 0; j < jmax; j += 2) {
				warray->set(w_index++, wr);
				warray->set(w_index++, wi);
				double tempr = wr;
				wr = tempr * wfr - wi * wfi;
				wi = tempr * wfi + wi * wfr;
			}
		}
	}
	{
		w_index = 0;
		int32_t w_index2 = warray->length >> 1;
		{
			int32_t i = 0;
			int32_t nstep = 2;
			for (; i < (imax - 1); ++i) {
				int32_t jmax = nstep;
				nstep *= 2;
				int32_t ii = w_index + jmax;
				for (int32_t j = 0; j < jmax; j += 2) {
					double wr = warray->get(w_index++);
					double wi = warray->get(w_index++);
					double wr1 = warray->get(ii++);
					double wi1 = warray->get(ii++);
					warray->set(w_index2++, wr * wr1 - wi * wi1);
					warray->set(w_index2++, wr * wi1 + wi * wr1);
				}
			}
		}
	}
	return warray;
}

void FFT::calc(int32_t fftFrameSize, $doubles* data, int32_t sign, $doubles* w) {
	int32_t fftFrameSize2 = fftFrameSize << 1;
	int32_t nstep = 2;
	if (nstep >= fftFrameSize2) {
		return;
	}
	int32_t i = nstep - 2;
	if (sign == -1) {
		calcF4F(fftFrameSize, data, i, nstep, w);
	} else {
		calcF4I(fftFrameSize, data, i, nstep, w);
	}
}

void FFT::calcF2E(int32_t fftFrameSize, $doubles* data, int32_t i, int32_t nstep, $doubles* w) {
	int32_t jmax = nstep;
	for (int32_t n = 0; n < jmax; n += 2) {
		double wr = $nc(w)->get(i++);
		double wi = w->get(i++);
		int32_t m = n + jmax;
		double datam_r = $nc(data)->get(m);
		double datam_i = data->get(m + 1);
		double datan_r = data->get(n);
		double datan_i = data->get(n + 1);
		double tempr = datam_r * wr - datam_i * wi;
		double tempi = datam_r * wi + datam_i * wr;
		data->set(m, datan_r - tempr);
		data->set(m + 1, datan_i - tempi);
		data->set(n, datan_r + tempr);
		data->set(n + 1, datan_i + tempi);
	}
	return;
}

void FFT::calcF4F(int32_t fftFrameSize, $doubles* data, int32_t i, int32_t nstep, $doubles* w) {
	int32_t fftFrameSize2 = fftFrameSize << 1;
	int32_t w_len = $nc(w)->length >> 1;
	while (nstep < fftFrameSize2) {
		if (nstep << 2 == fftFrameSize2) {
			calcF4FE(fftFrameSize, data, i, nstep, w);
			return;
		}
		int32_t jmax = nstep;
		int32_t nnstep = nstep << 1;
		if (nnstep == fftFrameSize2) {
			calcF2E(fftFrameSize, data, i, nstep, w);
			return;
		}
		nstep <<= 2;
		int32_t ii = i + jmax;
		int32_t iii = i + w_len;
		{
			i += 2;
			ii += 2;
			iii += 2;
			for (int32_t n = 0; n < fftFrameSize2; n += nstep) {
				int32_t m = n + jmax;
				double datam1_r = $nc(data)->get(m);
				double datam1_i = data->get(m + 1);
				double datan1_r = data->get(n);
				double datan1_i = data->get(n + 1);
				n += nnstep;
				m += nnstep;
				double datam2_r = data->get(m);
				double datam2_i = data->get(m + 1);
				double datan2_r = data->get(n);
				double datan2_i = data->get(n + 1);
				double tempr = datam1_r;
				double tempi = datam1_i;
				datam1_r = datan1_r - tempr;
				datam1_i = datan1_i - tempi;
				datan1_r = datan1_r + tempr;
				datan1_i = datan1_i + tempi;
				double n2w1r = datan2_r;
				double n2w1i = datan2_i;
				double m2ww1r = datam2_r;
				double m2ww1i = datam2_i;
				tempr = m2ww1r - n2w1r;
				tempi = m2ww1i - n2w1i;
				datam2_r = datam1_r + tempi;
				datam2_i = datam1_i - tempr;
				datam1_r = datam1_r - tempi;
				datam1_i = datam1_i + tempr;
				tempr = n2w1r + m2ww1r;
				tempi = n2w1i + m2ww1i;
				datan2_r = datan1_r - tempr;
				datan2_i = datan1_i - tempi;
				datan1_r = datan1_r + tempr;
				datan1_i = datan1_i + tempi;
				data->set(m, datam2_r);
				data->set(m + 1, datam2_i);
				data->set(n, datan2_r);
				data->set(n + 1, datan2_i);
				n -= nnstep;
				m -= nnstep;
				data->set(m, datam1_r);
				data->set(m + 1, datam1_i);
				data->set(n, datan1_r);
				data->set(n + 1, datan1_i);
			}
		}
		for (int32_t j = 2; j < jmax; j += 2) {
			double wr = w->get(i++);
			double wi = w->get(i++);
			double wr1 = w->get(ii++);
			double wi1 = w->get(ii++);
			double wwr1 = w->get(iii++);
			double wwi1 = w->get(iii++);
			for (int32_t n = j; n < fftFrameSize2; n += nstep) {
				int32_t m = n + jmax;
				double datam1_r = $nc(data)->get(m);
				double datam1_i = data->get(m + 1);
				double datan1_r = data->get(n);
				double datan1_i = data->get(n + 1);
				n += nnstep;
				m += nnstep;
				double datam2_r = data->get(m);
				double datam2_i = data->get(m + 1);
				double datan2_r = data->get(n);
				double datan2_i = data->get(n + 1);
				double tempr = datam1_r * wr - datam1_i * wi;
				double tempi = datam1_r * wi + datam1_i * wr;
				datam1_r = datan1_r - tempr;
				datam1_i = datan1_i - tempi;
				datan1_r = datan1_r + tempr;
				datan1_i = datan1_i + tempi;
				double n2w1r = datan2_r * wr1 - datan2_i * wi1;
				double n2w1i = datan2_r * wi1 + datan2_i * wr1;
				double m2ww1r = datam2_r * wwr1 - datam2_i * wwi1;
				double m2ww1i = datam2_r * wwi1 + datam2_i * wwr1;
				tempr = m2ww1r - n2w1r;
				tempi = m2ww1i - n2w1i;
				datam2_r = datam1_r + tempi;
				datam2_i = datam1_i - tempr;
				datam1_r = datam1_r - tempi;
				datam1_i = datam1_i + tempr;
				tempr = n2w1r + m2ww1r;
				tempi = n2w1i + m2ww1i;
				datan2_r = datan1_r - tempr;
				datan2_i = datan1_i - tempi;
				datan1_r = datan1_r + tempr;
				datan1_i = datan1_i + tempi;
				data->set(m, datam2_r);
				data->set(m + 1, datam2_i);
				data->set(n, datan2_r);
				data->set(n + 1, datan2_i);
				n -= nnstep;
				m -= nnstep;
				data->set(m, datam1_r);
				data->set(m + 1, datam1_i);
				data->set(n, datan1_r);
				data->set(n + 1, datan1_i);
			}
		}
		i += jmax << 1;
	}
	calcF2E(fftFrameSize, data, i, nstep, w);
}

void FFT::calcF4I(int32_t fftFrameSize, $doubles* data, int32_t i, int32_t nstep, $doubles* w) {
	int32_t fftFrameSize2 = fftFrameSize << 1;
	int32_t w_len = $nc(w)->length >> 1;
	while (nstep < fftFrameSize2) {
		if (nstep << 2 == fftFrameSize2) {
			calcF4IE(fftFrameSize, data, i, nstep, w);
			return;
		}
		int32_t jmax = nstep;
		int32_t nnstep = nstep << 1;
		if (nnstep == fftFrameSize2) {
			calcF2E(fftFrameSize, data, i, nstep, w);
			return;
		}
		nstep <<= 2;
		int32_t ii = i + jmax;
		int32_t iii = i + w_len;
		{
			i += 2;
			ii += 2;
			iii += 2;
			for (int32_t n = 0; n < fftFrameSize2; n += nstep) {
				int32_t m = n + jmax;
				double datam1_r = $nc(data)->get(m);
				double datam1_i = data->get(m + 1);
				double datan1_r = data->get(n);
				double datan1_i = data->get(n + 1);
				n += nnstep;
				m += nnstep;
				double datam2_r = data->get(m);
				double datam2_i = data->get(m + 1);
				double datan2_r = data->get(n);
				double datan2_i = data->get(n + 1);
				double tempr = datam1_r;
				double tempi = datam1_i;
				datam1_r = datan1_r - tempr;
				datam1_i = datan1_i - tempi;
				datan1_r = datan1_r + tempr;
				datan1_i = datan1_i + tempi;
				double n2w1r = datan2_r;
				double n2w1i = datan2_i;
				double m2ww1r = datam2_r;
				double m2ww1i = datam2_i;
				tempr = n2w1r - m2ww1r;
				tempi = n2w1i - m2ww1i;
				datam2_r = datam1_r + tempi;
				datam2_i = datam1_i - tempr;
				datam1_r = datam1_r - tempi;
				datam1_i = datam1_i + tempr;
				tempr = n2w1r + m2ww1r;
				tempi = n2w1i + m2ww1i;
				datan2_r = datan1_r - tempr;
				datan2_i = datan1_i - tempi;
				datan1_r = datan1_r + tempr;
				datan1_i = datan1_i + tempi;
				data->set(m, datam2_r);
				data->set(m + 1, datam2_i);
				data->set(n, datan2_r);
				data->set(n + 1, datan2_i);
				n -= nnstep;
				m -= nnstep;
				data->set(m, datam1_r);
				data->set(m + 1, datam1_i);
				data->set(n, datan1_r);
				data->set(n + 1, datan1_i);
			}
		}
		for (int32_t j = 2; j < jmax; j += 2) {
			double wr = w->get(i++);
			double wi = w->get(i++);
			double wr1 = w->get(ii++);
			double wi1 = w->get(ii++);
			double wwr1 = w->get(iii++);
			double wwi1 = w->get(iii++);
			for (int32_t n = j; n < fftFrameSize2; n += nstep) {
				int32_t m = n + jmax;
				double datam1_r = $nc(data)->get(m);
				double datam1_i = data->get(m + 1);
				double datan1_r = data->get(n);
				double datan1_i = data->get(n + 1);
				n += nnstep;
				m += nnstep;
				double datam2_r = data->get(m);
				double datam2_i = data->get(m + 1);
				double datan2_r = data->get(n);
				double datan2_i = data->get(n + 1);
				double tempr = datam1_r * wr - datam1_i * wi;
				double tempi = datam1_r * wi + datam1_i * wr;
				datam1_r = datan1_r - tempr;
				datam1_i = datan1_i - tempi;
				datan1_r = datan1_r + tempr;
				datan1_i = datan1_i + tempi;
				double n2w1r = datan2_r * wr1 - datan2_i * wi1;
				double n2w1i = datan2_r * wi1 + datan2_i * wr1;
				double m2ww1r = datam2_r * wwr1 - datam2_i * wwi1;
				double m2ww1i = datam2_r * wwi1 + datam2_i * wwr1;
				tempr = n2w1r - m2ww1r;
				tempi = n2w1i - m2ww1i;
				datam2_r = datam1_r + tempi;
				datam2_i = datam1_i - tempr;
				datam1_r = datam1_r - tempi;
				datam1_i = datam1_i + tempr;
				tempr = n2w1r + m2ww1r;
				tempi = n2w1i + m2ww1i;
				datan2_r = datan1_r - tempr;
				datan2_i = datan1_i - tempi;
				datan1_r = datan1_r + tempr;
				datan1_i = datan1_i + tempi;
				data->set(m, datam2_r);
				data->set(m + 1, datam2_i);
				data->set(n, datan2_r);
				data->set(n + 1, datan2_i);
				n -= nnstep;
				m -= nnstep;
				data->set(m, datam1_r);
				data->set(m + 1, datam1_i);
				data->set(n, datan1_r);
				data->set(n + 1, datan1_i);
			}
		}
		i += jmax << 1;
	}
	calcF2E(fftFrameSize, data, i, nstep, w);
}

void FFT::calcF4FE(int32_t fftFrameSize, $doubles* data, int32_t i, int32_t nstep, $doubles* w) {
	int32_t fftFrameSize2 = fftFrameSize << 1;
	int32_t w_len = $nc(w)->length >> 1;
	while (nstep < fftFrameSize2) {
		int32_t jmax = nstep;
		int32_t nnstep = nstep << 1;
		if (nnstep == fftFrameSize2) {
			calcF2E(fftFrameSize, data, i, nstep, w);
			return;
		}
		nstep <<= 2;
		int32_t ii = i + jmax;
		int32_t iii = i + w_len;
		for (int32_t n = 0; n < jmax; n += 2) {
			double wr = w->get(i++);
			double wi = w->get(i++);
			double wr1 = w->get(ii++);
			double wi1 = w->get(ii++);
			double wwr1 = w->get(iii++);
			double wwi1 = w->get(iii++);
			int32_t m = n + jmax;
			double datam1_r = $nc(data)->get(m);
			double datam1_i = data->get(m + 1);
			double datan1_r = data->get(n);
			double datan1_i = data->get(n + 1);
			n += nnstep;
			m += nnstep;
			double datam2_r = data->get(m);
			double datam2_i = data->get(m + 1);
			double datan2_r = data->get(n);
			double datan2_i = data->get(n + 1);
			double tempr = datam1_r * wr - datam1_i * wi;
			double tempi = datam1_r * wi + datam1_i * wr;
			datam1_r = datan1_r - tempr;
			datam1_i = datan1_i - tempi;
			datan1_r = datan1_r + tempr;
			datan1_i = datan1_i + tempi;
			double n2w1r = datan2_r * wr1 - datan2_i * wi1;
			double n2w1i = datan2_r * wi1 + datan2_i * wr1;
			double m2ww1r = datam2_r * wwr1 - datam2_i * wwi1;
			double m2ww1i = datam2_r * wwi1 + datam2_i * wwr1;
			tempr = m2ww1r - n2w1r;
			tempi = m2ww1i - n2w1i;
			datam2_r = datam1_r + tempi;
			datam2_i = datam1_i - tempr;
			datam1_r = datam1_r - tempi;
			datam1_i = datam1_i + tempr;
			tempr = n2w1r + m2ww1r;
			tempi = n2w1i + m2ww1i;
			datan2_r = datan1_r - tempr;
			datan2_i = datan1_i - tempi;
			datan1_r = datan1_r + tempr;
			datan1_i = datan1_i + tempi;
			data->set(m, datam2_r);
			data->set(m + 1, datam2_i);
			data->set(n, datan2_r);
			data->set(n + 1, datan2_i);
			n -= nnstep;
			m -= nnstep;
			data->set(m, datam1_r);
			data->set(m + 1, datam1_i);
			data->set(n, datan1_r);
			data->set(n + 1, datan1_i);
		}
		i += jmax << 1;
	}
}

void FFT::calcF4IE(int32_t fftFrameSize, $doubles* data, int32_t i, int32_t nstep, $doubles* w) {
	int32_t fftFrameSize2 = fftFrameSize << 1;
	int32_t w_len = $nc(w)->length >> 1;
	while (nstep < fftFrameSize2) {
		int32_t jmax = nstep;
		int32_t nnstep = nstep << 1;
		if (nnstep == fftFrameSize2) {
			calcF2E(fftFrameSize, data, i, nstep, w);
			return;
		}
		nstep <<= 2;
		int32_t ii = i + jmax;
		int32_t iii = i + w_len;
		for (int32_t n = 0; n < jmax; n += 2) {
			double wr = w->get(i++);
			double wi = w->get(i++);
			double wr1 = w->get(ii++);
			double wi1 = w->get(ii++);
			double wwr1 = w->get(iii++);
			double wwi1 = w->get(iii++);
			int32_t m = n + jmax;
			double datam1_r = $nc(data)->get(m);
			double datam1_i = data->get(m + 1);
			double datan1_r = data->get(n);
			double datan1_i = data->get(n + 1);
			n += nnstep;
			m += nnstep;
			double datam2_r = data->get(m);
			double datam2_i = data->get(m + 1);
			double datan2_r = data->get(n);
			double datan2_i = data->get(n + 1);
			double tempr = datam1_r * wr - datam1_i * wi;
			double tempi = datam1_r * wi + datam1_i * wr;
			datam1_r = datan1_r - tempr;
			datam1_i = datan1_i - tempi;
			datan1_r = datan1_r + tempr;
			datan1_i = datan1_i + tempi;
			double n2w1r = datan2_r * wr1 - datan2_i * wi1;
			double n2w1i = datan2_r * wi1 + datan2_i * wr1;
			double m2ww1r = datam2_r * wwr1 - datam2_i * wwi1;
			double m2ww1i = datam2_r * wwi1 + datam2_i * wwr1;
			tempr = n2w1r - m2ww1r;
			tempi = n2w1i - m2ww1i;
			datam2_r = datam1_r + tempi;
			datam2_i = datam1_i - tempr;
			datam1_r = datam1_r - tempi;
			datam1_i = datam1_i + tempr;
			tempr = n2w1r + m2ww1r;
			tempi = n2w1i + m2ww1i;
			datan2_r = datan1_r - tempr;
			datan2_i = datan1_i - tempi;
			datan1_r = datan1_r + tempr;
			datan1_i = datan1_i + tempi;
			data->set(m, datam2_r);
			data->set(m + 1, datam2_i);
			data->set(n, datan2_r);
			data->set(n + 1, datan2_i);
			n -= nnstep;
			m -= nnstep;
			data->set(m, datam1_r);
			data->set(m + 1, datam1_i);
			data->set(n, datan1_r);
			data->set(n + 1, datan1_i);
		}
		i += jmax << 1;
	}
}

void FFT::bitreversal($doubles* data) {
	if (this->fftFrameSize < 4) {
		return;
	}
	int32_t inverse = this->fftFrameSize2 - 2;
	for (int32_t i = 0; i < this->fftFrameSize; i += 4) {
		int32_t j = $nc(this->bitm_array)->get(i);
		if (i < j) {
			int32_t n = i;
			int32_t m = j;
			double tempr = $nc(data)->get(n);
			data->set(n, data->get(m));
			data->set(m, tempr);
			++n;
			++m;
			double tempi = data->get(n);
			data->set(n, data->get(m));
			data->set(m, tempi);
			n = inverse - i;
			m = inverse - j;
			tempr = data->get(n);
			data->set(n, data->get(m));
			data->set(m, tempr);
			++n;
			++m;
			tempi = data->get(n);
			data->set(n, data->get(m));
			data->set(m, tempi);
		}
		int32_t m = j + this->fftFrameSize;
		int32_t n = i + 2;
		double tempr = $nc(data)->get(n);
		data->set(n, data->get(m));
		data->set(m, tempr);
		++n;
		++m;
		double tempi = data->get(n);
		data->set(n, data->get(m));
		data->set(m, tempi);
	}
}

FFT::FFT() {
}

$Class* FFT::load$($String* name, bool initialize) {
	$loadClass(FFT, name, initialize, &_FFT_ClassInfo_, allocate$FFT);
	return class$;
}

$Class* FFT::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com