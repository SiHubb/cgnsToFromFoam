/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright Hydro-Quebec - IREQ, 2008
     \\/     M anipulation  |
-------------------------------------------------------------------------------
  License
  This file is part of OpenFOAM.

  OpenFOAM is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by the
  Free Software Foundation; either version 2 of the License, or (at your
  option) any later version.

  OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
  for more details.

  You should have received a copy of the GNU General Public License
  along with OpenFOAM; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

Authors
  Robert Magnan,  Hydro-Quebec - IREQ, 2008

\*---------------------------------------------------------------------------*/

#ifndef CGNSQUANTITYCONVERTER_H
#define CGNSQUANTITYCONVERTER_H

#include "libcgnsoo3/cgnsoo.H"

class CGNSQuantityConverter
{
public:
	CGNSQuantityConverter() {}
	virtual ~CGNSQuantityConverter();
	virtual CGNSOO::Quantity_t getEnum( const string& fieldname ) const;
};

class CGNSQuantityConverter_CFXcompatibility : public CGNSQuantityConverter
{
public:
	CGNSQuantityConverter_CFXcompatibility() {}
	virtual ~CGNSQuantityConverter_CFXcompatibility();
	virtual CGNSOO::Quantity_t getEnum( const string& fieldname ) const;
};

#endif
