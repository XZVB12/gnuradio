/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/filter/pfb_arb_resampler_ccf.h>

void bind_pfb_arb_resampler_ccf(py::module& m)
{
    using pfb_arb_resampler_ccf    = gr::filter::pfb_arb_resampler_ccf;


    py::class_<pfb_arb_resampler_ccf,gr::block, gr::basic_block,
        std::shared_ptr<pfb_arb_resampler_ccf>>(m, "pfb_arb_resampler_ccf")

        .def(py::init(&pfb_arb_resampler_ccf::make),
           py::arg("rate"), 
           py::arg("taps"), 
           py::arg("filter_size") = 32 
        )
        

        .def("set_taps",&pfb_arb_resampler_ccf::set_taps,
            py::arg("taps") 
        )
        .def("taps",&pfb_arb_resampler_ccf::taps)
        .def("print_taps",&pfb_arb_resampler_ccf::print_taps)
        .def("set_rate",&pfb_arb_resampler_ccf::set_rate,
            py::arg("rate") 
        )
        .def("set_phase",&pfb_arb_resampler_ccf::set_phase,
            py::arg("ph") 
        )
        .def("phase",&pfb_arb_resampler_ccf::phase)
        .def("taps_per_filter",&pfb_arb_resampler_ccf::taps_per_filter)
        .def("interpolation_rate",&pfb_arb_resampler_ccf::interpolation_rate)
        .def("decimation_rate",&pfb_arb_resampler_ccf::decimation_rate)
        .def("fractional_rate",&pfb_arb_resampler_ccf::fractional_rate)
        .def("group_delay",&pfb_arb_resampler_ccf::group_delay)
        .def("phase_offset",&pfb_arb_resampler_ccf::phase_offset,
            py::arg("freq"), 
            py::arg("fs") 
        )
        ;


} 