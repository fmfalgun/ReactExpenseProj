import React from "react";

import ChartBar from "./ChartBar";
import "./Chart.css";

const Chart = (props) => {

  // my code for issue

  // const totalMaximum = 0;
  // props.dataPoints.forEach(element => {
  //   if(totalMaximum < element.value){
  //     totalMaximum = element.value;
  //   }
  // });

  // course code for issue

  const dataPointValues = props.dataPoints.map(dataPoint => dataPoint.value)
  const totalMaximum = Math.max(...dataPointValues);

  return (
    <div className="chart">
      {props.dataPoints.map((dataPoint) => (
        <ChartBar
          key={dataPoint.label}
          value={dataPoint.value}
          maxValue={totalMaximum}
          label={dataPoint.label}
        />
      ))}
    </div>
  );
};

export default Chart;
