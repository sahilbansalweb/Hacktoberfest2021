
# import the pyplot library

import matplotlib.pyplot as plotter
# The slice names of a population distribution pie chart

pieLabels              = 'Asia', 'Africa', 'Europe', 'North America', 'South America', 'Australia'
# Population data
populationShare     = [59.69, 16, 9.94, 7.79, 5.68, 0.54]
figureObject, axesObject = plotter.subplots()
# Draw the pie chart
axesObject.pie(populationShare,
        labels=pieLabels,
        autopct='%1.2f',
        startangle=90)
# Aspect ratio - equal means pie is a circle
axesObject.axis('equal')
plotter.show()
