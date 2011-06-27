//
// Copyright 2011 Ettus Research LLC
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef INCLUDED_LIBUHD_USRP_TX_DSP_CORE_200_HPP
#define INCLUDED_LIBUHD_USRP_TX_DSP_CORE_200_HPP

#include <uhd/config.hpp>
#include <boost/utility.hpp>
#include <boost/shared_ptr.hpp>
#include "wb_iface.hpp"

class tx_dsp_core_200 : boost::noncopyable{
public:
    typedef boost::shared_ptr<tx_dsp_core_200> sptr;

    sptr make(
        wb_iface::sptr iface,
        const size_t dsp_base, const size_t ctrl_base,
        const boost::uint32_t sid
    );

    virtual void set_tick_rate(const double rate) = 0;

    virtual double set_host_rate(const double rate) = 0;

    virtual double set_freq(const double freq) = 0;

};

#endif /* INCLUDED_LIBUHD_USRP_TX_DSP_CORE_200_HPP */
