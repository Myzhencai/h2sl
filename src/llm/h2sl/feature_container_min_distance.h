/**
 * @file feature_min_distance_abstract_container.h
 * 
 * @brief
 * 
 * Class used to describe a feature of the abstract_container number
 */

#ifndef H2SL_FEATURE_CONTAINER_MIN_DISTANCE_H
#define H2SL_FEATURE_CONTAINER_MIN_DISTANCE_H

#include <iostream>
#include <libxml/tree.h>

#include "h2sl/feature.h"

namespace h2sl {
  /**
   * Feature_Container_Min_Distance class definition
   */
  class Feature_Container_Min_Distance : public Feature {
  public:
    Feature_Container_Min_Distance( const bool& invert = false );
    Feature_Container_Min_Distance( const Feature_Container_Min_Distance& other );
    virtual ~Feature_Container_Min_Distance();
    Feature_Container_Min_Distance& operator=( const Feature_Container_Min_Distance& other );
 
    virtual bool value( const unsigned int& cv, 
                        const Grounding* grounding, 
                        const std::vector< std::pair< const Phrase*, std::vector< Grounding* > > >& children, 
                        const Phrase* phrase, 
                        const World* world );
 
   virtual bool value( const unsigned int& cv, 
                       const Grounding* grounding, 
                       const std::vector< std::pair< const Phrase*, std::vector< Grounding* > > >& children, 
                       const Phrase* phrase, 
                       const World* world, 
                       const Grounding* context );
    
    virtual void from_xml( const std::string& file );
    virtual void from_xml( xmlNodePtr root );
    virtual void to_xml( const std::string& file )const;
    virtual void to_xml( xmlDocPtr doc, xmlNodePtr root )const;

    virtual inline const feature_type_t type( void )const{ return FEATURE_TYPE_GROUNDING; };

  protected:

  private:

  };

  /** 
   * Feature_Container_Min_Distance class ostream operator
   */
  std::ostream& operator<<( std::ostream& out, const Feature_Container_Min_Distance& other );
}

#endif /* H2SL_FEATURE_CONTAINER_MIN_DISTANCE_H */